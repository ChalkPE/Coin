/**
 * @author ChalkPE <chalk@chalk.pe>
 * @since 2016-11-02
 */

#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define DEBUG_MODE 1
#define DEBUG if(DEBUG_MODE)

#define OPCODE_NOP    1
#define OPCODE_MOVE   2
#define OPCODE_PREV   3
#define OPCODE_NEXT   4
#define OPCODE_HERE   5
#define OPCODE_THERE  6
#define OPCODE_MARK   7
#define OPCODE_REMIND 8

#define OPCODE_SET    10
#define OPCODE_IMPORT 11
#define OPCODE_EXPORT 12
#define OPCODE_SCAN   13
#define OPCODE_SCANF  14
#define OPCODE_PRINT  15
#define OPCODE_PRINTF 16

#define OPCODE_ADD       20
#define OPCODE_SUBTRACT  21
#define OPCODE_MULTIPLY  22
#define OPCODE_DIVIDE    23
#define OPCODE_REMAINDER 24

#define OPCODE(x)  if(!strcmp(keyword, #x)) return OPCODE_##x; else
#define COMMAND(x) if(!strcmp(argv[1], #x)) return __##x(argv[2]); else

#define USAGE(x) printf("    %s "#x"\n", *argv);
#define OPEN(filename, mode) if(NULL == (file = openFile(filename, #mode))) return

#define MAX_LABEL_COUNT 65536
#define MAX_MEMORY_SIZE 65536
#define MAX_OPCODE_COUNT 65536
#define MAX_OPCODE_LENGTH 16
#define MAX_BASE26_LENGTH 5





int label[MAX_LABEL_COUNT];
int memory[MAX_MEMORY_SIZE];
int opcodes[MAX_OPCODE_COUNT][2];

char base26[] = {
        'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I',
        'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R',
        'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'
};





int checkExtension(char* s, char* extension){
    char* dot = strrchr(s, '.');

    if(dot == NULL) return 0;
    return strcmp(dot, extension) == 0;
}

FILE* openFile(char* filename, char* mode){
    FILE* file = fopen(filename, mode);

    if(file == NULL) printf("Error: The file \"%s\" doesn't exist.", filename);
    return file;
}





void toUpperCase(char* s){
    size_t i, length = strlen(s);
    for(i = 0; i < length; i++) s[i] = (char) toupper(s[i]);
}

void toLowerCase(char* s){
    size_t i, length = strlen(s);
    for(i = 0; i < length; i++) s[i] = (char) tolower(s[i]);
}

int hash(char *s){
    char c; unsigned long hash = 5381;

    while((c = *s++) > 0) hash = (hash << 5) + hash + c;
    return (int) (hash % MAX_LABEL_COUNT);
}

char* intToBase26(int value){
    char buffer[MAX_BASE26_LENGTH] = "AAAA";
    size_t offset = sizeof(buffer) - 1;

    do { buffer[--offset] = base26[value % 26]; } while(value /= 26);
    return strdup(buffer);
}

int base26toInt(char* base26){
    char c; int result = 0;
    while((c = *base26++) > 0){
        if(c < 'A' || 'Z' < c) return -1;
        result = result * 26 + (c - 'A');
    }

    return result;
}





size_t validatePointer(size_t p){
    if(p < 0)
        return 0;

    else if(p >= MAX_MEMORY_SIZE)
        return MAX_MEMORY_SIZE - 1;

    else return p;
}





int getOpcode(char* keyword){
    toUpperCase(keyword);

    OPCODE(NOP)
    OPCODE(MOVE)
    OPCODE(PREV)
    OPCODE(NEXT)
    OPCODE(HERE)
    OPCODE(THERE)
    OPCODE(MARK)
    OPCODE(REMIND)

    OPCODE(SET)
    OPCODE(IMPORT)
    OPCODE(EXPORT)
    OPCODE(SCAN)
    OPCODE(SCANF)
    OPCODE(PRINT)
    OPCODE(PRINTF)

    OPCODE(ADD)
    OPCODE(SUBTRACT)
    OPCODE(MULTIPLY)
    OPCODE(DIVIDE)
    OPCODE(REMAINDER)

    return 0;
}

size_t compile(char* filename){
    FILE* file; size_t i = 0;

    int opcode, argument;
    char keyword[MAX_OPCODE_LENGTH], labelName[MAX_OPCODE_COUNT];

    OPEN(filename, r) 0;

    while(fscanf(file, "%s ", keyword) != EOF){
        DEBUG printf("(%s) ", keyword);

        switch(opcode = getOpcode(keyword)){
            case OPCODE_NOP:
            case OPCODE_HERE:
            case OPCODE_THERE:
            case OPCODE_SCAN:
            case OPCODE_SCANF:
            case OPCODE_PRINT:
            case OPCODE_PRINTF:
                opcodes[i][0] = opcode; break;

            case OPCODE_MOVE:
            case OPCODE_PREV:
            case OPCODE_NEXT:
            case OPCODE_SET:
            case OPCODE_IMPORT:
            case OPCODE_EXPORT:
            case OPCODE_ADD:
            case OPCODE_SUBTRACT:
            case OPCODE_MULTIPLY:
                fscanf(file, " %d", &argument);
                DEBUG printf("[%d] ", argument);

                opcodes[i][0] = opcode;
                opcodes[i][1] = argument; break;

            case OPCODE_MARK:
            case OPCODE_REMIND:
                fscanf(file, " %s", labelName);
                DEBUG printf("[%s] ", labelName);

                opcodes[i][0] = opcode;
                opcodes[i][1] = hash(labelName); break;

            default:
                printf("Error: Unknown keyword \"%s\".", keyword);
                fclose(file); return 0;
        }

        if(++i >= MAX_OPCODE_COUNT) break;
    }

    fclose(file); return i;
}

int run(size_t length){
    size_t i, p = 0;
    int opcode, argument;

    for(i = 0; i < length && i < MAX_OPCODE_COUNT; i++){
        opcode = opcodes[i][0], argument = opcodes[i][1];

        switch(opcode){
            default: case OPCODE_NOP:

            break; case OPCODE_MOVE:   p = validatePointer((size_t) argument);
            break; case OPCODE_PREV:   p = validatePointer(p - (size_t) argument);
            break; case OPCODE_NEXT:   p = validatePointer(p + (size_t) argument);
            break; case OPCODE_HERE:   memory[p] = (int) p;
            break; case OPCODE_THERE:  p = (size_t) memory[p];
            break; case OPCODE_MARK:   label[argument] = (int) i;
            break; case OPCODE_REMIND: if(memory[p] != 0) i = (size_t) label[argument];

            break; case OPCODE_SET:    memory[p] = argument;
            break; case OPCODE_IMPORT: memory[p] = memory[argument];
            break; case OPCODE_EXPORT: memory[argument] = memory[p];
            break; case OPCODE_SCAN:   memory[p] = getchar();
            break; case OPCODE_SCANF:  scanf("%d", memory + p);
            break; case OPCODE_PRINT:  putchar(memory[p]);
            break; case OPCODE_PRINTF: printf("%d", memory[p]);

            break; case OPCODE_ADD:       memory[p] += argument;
            break; case OPCODE_SUBTRACT:  memory[p] -= argument;
            break; case OPCODE_MULTIPLY:  memory[p] *= argument;
            break; case OPCODE_DIVIDE:    memory[p] /= argument;
            break; case OPCODE_REMAINDER: memory[p] %= argument;
        }
    }

    return memory[p];
}





int __compile(char* filename){
    FILE* file;
    char* base26;
    size_t i, j, length;

    if(!checkExtension(filename, ".zzp")){
        printf("Error: The file \"%s\" isn't zzp source.", filename);
        return 1;
    }

    length = compile(filename);
    if(!length) return 1;

    filename[strlen(filename) - 1] = 'z';
    file = fopen(filename, "w");

    for(i = 0; i < length; i++) for(j = 0; j < 2; j++){
        base26 = intToBase26(opcodes[i][j]);
        fprintf(file, "%s", base26); free(base26);
    }

    return fclose(file) != 0;
}

int __run(char* filename){
    FILE* file; size_t i = 0, j = 0;
    char base26[MAX_BASE26_LENGTH];

    if(!checkExtension(filename, ".zzz")){
        printf("Error: The file \"%s\" isn't zzz runnable.", filename);
        return 1;
    }

    OPEN(filename, r) 0;
    while(fscanf(file, "%4s", base26) != EOF){
        opcodes[i][j] = base26toInt(base26);
        if(++j > 1) i++, j = 0;
    }

    return run(i);
}





int main(int argc, char** argv){
    if(argc < 3){
        puts("Usage:\n");

        USAGE(compile <filename.zzp>)
        USAGE(run     <filename.zzz>)
        USAGE(encode  <filename.zzz>)
        USAGE(decode  <filename.zzz>)

        return 1;
    }

    toLowerCase(argv[1]);
    COMMAND(compile) COMMAND(run) return 0;
}