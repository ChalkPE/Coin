/**
 * @author ChalkPE <chalk@chalk.pe>
 * @since 2016-11-02
 */

#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define OPCODE_NOP    0
#define OPCODE_MOVE   1
#define OPCODE_PREV   2
#define OPCODE_NEXT   3
#define OPCODE_HERE   4
#define OPCODE_THERE  5
#define OPCODE_MARK   6
#define OPCODE_REMIND 7

#define OPCODE_SET    10
#define OPCODE_IMPORT 11
#define OPCODE_EXPORT 12
#define OPCODE_SCAN   13
#define OPCODE_PRINT  14
#define OPCODE_PRINTF 15

#define OPCODE_ADD       20
#define OPCODE_SUBTRACT  21
#define OPCODE_MULTIPLY  22
#define OPCODE_DIVIDE    23
#define OPCODE_REMAINDER 24

#define OPCODE(x) if(!strcmp(keyword, #x)) return OPCODE_##x; else

#define MAX_LABEL_COUNT 16384
#define MAX_MEMORY_SIZE 65536
#define MAX_OPCODE_COUNT 32768
#define MAX_OPCODE_LENGTH 32
#define MAX_FILENAME_LENGTH 256

int label[MAX_LABEL_COUNT];
char memory[MAX_MEMORY_SIZE];

char* toUpperCase(char* s){
    size_t i, length = strlen(s);
    for(i = 0; i < length; i++) s[i] = (char) toupper(s[i]);
    return s;
}

int getOpcode(char* keyword){
    OPCODE(NOP) OPCODE(MOVE) OPCODE(PREV) OPCODE(NEXT) OPCODE(HERE) OPCODE(THERE) OPCODE(MARK) OPCODE(REMIND)
    OPCODE(SET) OPCODE(IMPORT) OPCODE(EXPORT) OPCODE(SCAN) OPCODE(PRINT) OPCODE(PRINTF)
    OPCODE(ADD) OPCODE(SUBTRACT) OPCODE(MULTIPLY) OPCODE(DIVIDE) OPCODE(REMAINDER)
    return 0;
}

int interpret(int codes[MAX_OPCODE_COUNT][2], char* filename){
    int opcode, argument, length = 0;
    char keyword[MAX_OPCODE_LENGTH];

    FILE* file = fopen(filename, "r");
    if(!file){
        printf("Error: The file \"%s\" doesn't exist.", filename);
        return 0;
    }

    while(fscanf(file, "%s %d", keyword, &argument) > 0 && length < MAX_OPCODE_COUNT){
        toUpperCase(keyword);

        switch(opcode = getOpcode(keyword)){
            case OPCODE_NOP:    case OPCODE_HERE:  case OPCODE_THERE:
            case OPCODE_SCAN:   case OPCODE_PRINT: case OPCODE_PRINTF:
                codes[length][0] = opcode; break;

            case OPCODE_MOVE: case OPCODE_PREV:     case OPCODE_NEXT:     case OPCODE_MARK:   case OPCODE_REMIND:
            case OPCODE_SET:  case OPCODE_IMPORT:   case OPCODE_EXPORT:
            case OPCODE_ADD:  case OPCODE_SUBTRACT: case OPCODE_MULTIPLY: case OPCODE_DIVIDE: case OPCODE_REMAINDER:
                codes[length][0] = opcode;
                codes[length][1] = argument; break;

            default:
                printf("Error: Unknown keyword \"%s\".", keyword);
                fclose(file); return 0;
        } length++;
    }

    fclose(file);
    return length;
}

int get(int value, int defaultValue){
    return value ? value : defaultValue;
}

int validatePointer(int p){
    if(p < 0) return 0;
    else if(p >= MAX_MEMORY_SIZE) return MAX_MEMORY_SIZE - 1;
    else return p;
}

int validateLabel(int l){
    if(l < 0) return 0;
    else if(l >= MAX_LABEL_COUNT) return MAX_LABEL_COUNT - 1;
    else return l;
}

int run(int codes[MAX_OPCODE_COUNT][2], int length){
    int i, opcode, argument, p = 0;
    for(i = 0; i < length && i < MAX_OPCODE_COUNT; i++){
        opcode = codes[i][0], argument = codes[i][1];

        switch(opcode){
            default: case OPCODE_NOP:

            break; case OPCODE_MOVE:   p = validatePointer(argument);
            break; case OPCODE_PREV:   p = validatePointer(p - get(argument, 1));
            break; case OPCODE_NEXT:   p = validatePointer(p + get(argument, 1));
            break; case OPCODE_HERE:   memory[p] = (char) p;
            break; case OPCODE_THERE:  p = memory[p];
            break; case OPCODE_MARK:   label[validateLabel(argument)] = i;
            break; case OPCODE_REMIND: i = label[validateLabel(argument)];

            break; case OPCODE_SET:    memory[p] = (char) argument;
            break; case OPCODE_IMPORT: memory[p] = memory[argument];
            break; case OPCODE_EXPORT: memory[argument] = memory[p];
            break; case OPCODE_SCAN:   memory[p] = (char) getchar();
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

int main(){
    char filename[MAX_FILENAME_LENGTH];
    int codes[MAX_OPCODE_COUNT][2], length, retval;

    printf("> "), scanf("%s", filename);
    length = interpret(codes, filename);

    if(!length) return -1;

    retval = run(codes, length);
    return putchar('\n'), system("pause"), retval;
}