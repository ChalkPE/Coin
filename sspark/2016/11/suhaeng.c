/**
 * @author ChalkPE <chalk@chalk.pe>
 * @since 2016-11-02
 */

#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

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

#define OPCODE(x) if(!strcmp(keyword, #x)) return OPCODE_##x; else

#define MAX_LABEL_COUNT 65536
#define MAX_MEMORY_SIZE 65536
#define MAX_OPCODE_COUNT 32768
#define MAX_OPCODE_LENGTH 16
#define MAX_FILENAME_LENGTH 256

int label[MAX_LABEL_COUNT];
int memory[MAX_MEMORY_SIZE];
int opcodes[MAX_OPCODE_COUNT][2];

void toUpperCase(char* s){
    size_t i, length = strlen(s);
    for(i = 0; i < length; i++) s[i] = (char) toupper(s[i]);
}

int hash(char *s){
    char c; unsigned long hash = 5381;

    while((c = *s++) > 0) hash = (hash << 5) + hash + c;
    return (int) (hash % MAX_LABEL_COUNT);
}

int getOpcode(char* keyword){
    toUpperCase(keyword);

    OPCODE(NOP) OPCODE(MOVE) OPCODE(PREV) OPCODE(NEXT) OPCODE(HERE) OPCODE(THERE) OPCODE(MARK) OPCODE(REMIND)
    OPCODE(SET) OPCODE(IMPORT) OPCODE(EXPORT) OPCODE(SCAN) OPCODE(SCANF) OPCODE(PRINT) OPCODE(PRINTF)
    OPCODE(ADD) OPCODE(SUBTRACT) OPCODE(MULTIPLY) OPCODE(DIVIDE) OPCODE(REMAINDER)

    return 0;
}

size_t interpret(char* filename){
    FILE* file; size_t i = 0;

    int opcode, argument;
    char keyword[MAX_OPCODE_LENGTH], sargument[MAX_OPCODE_COUNT];

    if(NULL == (file = fopen(filename, "r"))){
        printf("Error: The file \"%s\" doesn't exist.", filename);
        return 0;
    }

    while(fscanf(file, "%s ", keyword) != EOF){
        //printf("(%s) ", keyword);

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
                //printf("[%d] ", argument);

                opcodes[i][0] = opcode;
                opcodes[i][1] = argument; break;

            case OPCODE_MARK:
            case OPCODE_REMIND:
                fscanf(file, " %s", sargument);
                //printf("[%s] ", sargument);

                opcodes[i][0] = opcode;
                opcodes[i][1] = hash(sargument); break;

            default:
                printf("Error: Unknown keyword \"%s\".", keyword);
                fclose(file); return 0;
        }

        if(++i >= MAX_OPCODE_COUNT) break;
    }

    fclose(file); return i;
}

size_t validatePointer(size_t p){
    if(p < 0) return 0;
    else if(p >= MAX_MEMORY_SIZE) return MAX_MEMORY_SIZE - 1;
    else return p;
}

void run(size_t length){
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
}

int main(){
    size_t length;
    char filename[MAX_FILENAME_LENGTH];

    printf("> "), scanf("%s", filename);
    length = interpret(filename);

    if(length) run(length);
    return putchar('\n'), system("pause"), 0;
}