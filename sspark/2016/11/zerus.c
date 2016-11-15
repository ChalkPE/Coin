/**
 * @author ChalkPE <chalk@chalk.pe>
 * @since 2016-11-02
 */

#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define DEBUG if(DEBUG_MODE)

#define OPCODE_NOP    10000
#define OPCODE_MOVE   20000
#define OPCODE_PREV   30000
#define OPCODE_NEXT   40000
#define OPCODE_HERE   50000
#define OPCODE_THERE  60000
#define OPCODE_MARK   70000
#define OPCODE_REMIND 80000
#define OPCODE_SKIP   90000

#define OPCODE_SET    100000
#define OPCODE_IMPORT 110000
#define OPCODE_EXPORT 120000
#define OPCODE_SCAN   130000
#define OPCODE_SCANS  140000
#define OPCODE_PRINT  150000
#define OPCODE_PRINTS 160000

#define OPCODE_ADD       200000
#define OPCODE_SUBTRACT  210000
#define OPCODE_MULTIPLY  220000
#define OPCODE_DIVIDE    230000
#define OPCODE_REMAINDER 240000
#define OPCODE_MIN       250000
#define OPCODE_MAX       260000

#define OPCODE_COMMENT_BEGIN 300000
#define OPCODE_COMMENT_END   310000

#define OPCODE(x)  if(!strcmp(keyword, #x)) return OPCODE_##x; else
#define COMMAND(x) if(!strcmp(argv[1], #x)) return __##x(argv[2]); else
#define BICOMMAND(x) if(!strcmp(argv[1], #x)) return __##x(argv[2], argv[3]); else

#define USAGE(x) printf("    %s "#x"\n", *argv);
#define ARGC(x) if(argc < x) return printUsage(argv), 1;

#define OPEN(filename, mode) if(NULL == (file = openFile(filename, #mode))) return

#define MAX_LABEL_COUNT 65536
#define MAX_MEMORY_SIZE 65536
#define MAX_OPCODE_COUNT 65536
#define MAX_OPCODE_LENGTH 16
#define MAX_BASE26_LENGTH 5

int label[MAX_LABEL_COUNT], memory[MAX_MEMORY_SIZE], opcodes[MAX_OPCODE_COUNT][2], DEBUG_MODE = 0;

char digits[] = {
    'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M',
    'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'
};

/**
 * prints program usage.
 * @param argv arguments.
 */
void printUsage(char** argv){
    puts("Usage:");
    USAGE(compile <file.zzp>) USAGE(execute <file.zzz>)
    USAGE(encrypt <file.zzz> <KEY>) USAGE(decrypt <file.zze> <KEY>)
}

/**
 * checks if the string ends with the extension.
 * @param s the filename to check.
 * @param extension the extension starts with dot.
 * @return if the string ends with the extension.
 */
int checkExtension(char* s, char* extension){
    char* dot = strrchr(s, '.');

    if(dot == NULL) return 0;
    return strcmp(dot, extension) == 0;
}

/**
 * opens the file. if it doen't exists, prints error.
 * @param filename name of the file to open.
 * @param mode open mode. same as `fopen(..., mode)`.
 * @return the FILE pointer. if fails, NULL.
 */
FILE* openFile(char* filename, char* mode){
    FILE* file = fopen(filename, mode);

    if(file == NULL) printf("Error: The file \"%s\" doesn't exist.", filename);
    return file;
}

/**
 * makes every characters in string upper case.
 * @param s the string.
 */
void toUpperCase(char* s){
    size_t i, length = strlen(s);
    for(i = 0; i < length; i++) s[i] = (char) toupper(s[i]);
}

/**
 * makes every characters in string lower case.
 * @param s the string.
 */
void toLowerCase(char* s){
    size_t i, length = strlen(s);
    for(i = 0; i < length; i++) s[i] = (char) tolower(s[i]);
}

/**
 * checks if the character is upper case. if not, prints error.
 * @param c the character.
 * @param where description for error message.
 * @return if the character is upper case.
 */
int requireUpperCase(char c, char* where){
    if(!isalpha(c) || !isupper(c)){
        printf("Error: An illegal character '%c (%d)' has been found in the %s. ", c, c, where);
        return 0;
    }
    return 1;
}

/**
 * checks if eveny characters in the string is upper case. if not, prints error.
 * @param s the string.
 * @param where description for error message.
 * @return if every characters are upper case.
 */
int requireUpperCases(char* s, char* where){
    size_t i, length = strlen(s);

    for(i = 0; i < length; i++) if(!requireUpperCase(s[i], where)) return 0;
    return 1;
}

/**
 * creates the hash of the string.
 * @param s the string.
 * @return the hash. 0 <= x < MAX_LABEL_COUNT.
 */
int hash(char *s){
    char c; unsigned long hash = 5381;

    while((c = *s++) > 0) hash = (hash << 5) + hash + c;
    return (int) (hash % MAX_LABEL_COUNT);
}

/**
 * converts integer to base26 string.
 * @param value the integer to convert.
 * @return the base26 string of the value.
 */
char* intToBase26(int value){
    char buffer[MAX_BASE26_LENGTH] = "AAAA";
    size_t offset = sizeof(buffer) - 1;

    do { buffer[--offset] = digits[value % 26]; } while(value /= 26);
    return strdup(buffer);
}

/**
 * converts base26 string to integer.
 * @param buffer the base26 string.
 * @return the integer value of base26 string.
 */
int base26toInt(char* buffer){
    char c; int result = 0;
    while((c = *buffer++) > 0){
        if(c < 'A' || 'Z' < c) return -1;
        result = result * 26 + (c - 'A');
    }
    return result;
}

/**
 * prevents the memory index out of range.
 * @param p memory index.
 * @return safe memory index.
 */
size_t memoryIndex(size_t p){
    if(p < 0) return 0;
    else if(p < MAX_MEMORY_SIZE) return p;
    else return MAX_MEMORY_SIZE - 1;
}

/**
 * checks string and finds proper keyword.
 * @param keyword the string to find keyword.
 * @return found keyword. if not, 0 is returned.
 */
int getOpcode(char* keyword){
    toUpperCase(keyword);

    if(*keyword == '`') return OPCODE_COMMENT_BEGIN;
    if(keyword[strlen(keyword) - 1] == '`') return OPCODE_COMMENT_END;

    OPCODE(NOP)
    OPCODE(MOVE)
    OPCODE(PREV)
    OPCODE(NEXT)
    OPCODE(HERE)
    OPCODE(THERE)
    OPCODE(MARK)
    OPCODE(REMIND)
    OPCODE(SKIP)

    OPCODE(SET)
    OPCODE(IMPORT)
    OPCODE(EXPORT)
    OPCODE(SCAN)
    OPCODE(SCANS)
    OPCODE(PRINT)
    OPCODE(PRINTS)

    OPCODE(ADD)
    OPCODE(SUBTRACT)
    OPCODE(MULTIPLY)
    OPCODE(DIVIDE)
    OPCODE(REMAINDER)
    OPCODE(MIN)
    OPCODE(MAX)

    return 0;
}

/**
 * reads code from zzp file and saves it to `opcodes` array.
 * @param filename zzp file to read. ends with ".zzp".
 * @return the count of opcodes that read from the file.
 */
size_t compile(char* filename){
    FILE* file; size_t i = 0;

    int opcode, argument, commented = 0;
    char keyword[MAX_OPCODE_LENGTH], labelName[MAX_OPCODE_LENGTH];

    OPEN(filename, r) 0;

    while(fscanf(file, "%s ", keyword) != EOF){
        DEBUG printf("(%s) ", keyword);

        switch(opcode = getOpcode(keyword)){
            case OPCODE_COMMENT_BEGIN:
                commented = 1; continue;

            case OPCODE_COMMENT_END:
                DEBUG printf("\n");
                commented = 0; continue;

            default: if(commented) continue;
        }

        switch(opcode){
            case OPCODE_NOP:
            case OPCODE_HERE:
            case OPCODE_THERE:
            case OPCODE_SCAN:
            case OPCODE_SCANS:
            case OPCODE_PRINT:
            case OPCODE_PRINTS:
                opcodes[i][0] = opcode; break;

            case OPCODE_MOVE:
            case OPCODE_PREV:
            case OPCODE_NEXT:
            case OPCODE_SKIP:
            case OPCODE_SET:
            case OPCODE_IMPORT:
            case OPCODE_EXPORT:
            case OPCODE_ADD:
            case OPCODE_SUBTRACT:
            case OPCODE_MULTIPLY:
            case OPCODE_DIVIDE:
            case OPCODE_REMAINDER:
            case OPCODE_MIN:
            case OPCODE_MAX:
                fscanf(file, " %d", &argument);
                DEBUG printf("[%d] ", argument);

                opcodes[i][0] = opcode;
                opcodes[i][1] = argument;

                if((opcode == OPCODE_DIVIDE || opcode == OPCODE_REMAINDER) && argument == 0){
                    printf("Error: Divide by zero.");
                    fclose(file); return 0;
                } else break;

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

        DEBUG printf("\n");
        if(++i >= MAX_OPCODE_COUNT) break;
    }

    fclose(file); return i;
}

/**
 * reads code from `opcodes` array and executes it.
 * @param length The count of opcodes in `opcodes` array.
 * @return memory value which the pointer points when program has been finished.
 */
int execute(size_t length){
    size_t i, p = 0;
    int opcode, argument;

    for(i = 0; i < length && i < MAX_OPCODE_COUNT; i++){
        opcode = opcodes[i][0], argument = opcodes[i][1];

        switch(opcode){
            default:
                printf("Error: Invalid opcode '0x%x' on index %d.", opcode, (int) i);
                return -1;

            case OPCODE_NOP:
                DEBUG printf("<nop> ");

            break; case OPCODE_MOVE:   p = memoryIndex((size_t) argument);
            break; case OPCODE_PREV:   p = memoryIndex(p - (size_t) argument);
            break; case OPCODE_NEXT:   p = memoryIndex(p + (size_t) argument);
            break; case OPCODE_HERE:   memory[p] = (int) p;
            break; case OPCODE_THERE:  p = (size_t) memory[p];
            break; case OPCODE_MARK:   label[argument] = (int) i;
            break; case OPCODE_REMIND: if(memory[p] != 0) i = (size_t) label[argument];
            break; case OPCODE_SKIP:   if(memory[p] != 0) i += (size_t) argument;

            break; case OPCODE_SET:    memory[p] = argument;
            break; case OPCODE_IMPORT: memory[p] = memory[argument];
            break; case OPCODE_EXPORT: memory[argument] = memory[p];
            break; case OPCODE_SCAN:   memory[p] = getchar();
            break; case OPCODE_SCANS:  scanf("%d", memory + p);
            break; case OPCODE_PRINT:  putchar(memory[p]);
            break; case OPCODE_PRINTS: printf("%d", memory[p]);

            break; case OPCODE_ADD:       memory[p] += argument;
            break; case OPCODE_SUBTRACT:  memory[p] -= argument;
            break; case OPCODE_MULTIPLY:  memory[p] *= argument;
            break; case OPCODE_DIVIDE:    memory[p] /= argument;
            break; case OPCODE_REMAINDER: memory[p] %= argument;
            break; case OPCODE_MIN:       if(memory[p] < argument) memory[p] = argument;
            break; case OPCODE_MAX:       if(memory[p] > argument) memory[p] = argument;
        }
    }

    return memory[p];
}

/**
 * serializes `opcodes` array to base26 strings and save them to file.
 * @param filename name of the file to save results.
 * @param length the count of opcodes.
 * @return if it succeeded.
 */
int serialize(char* filename, size_t length){
    FILE* file;
    size_t i, j; char* base26;

    filename[strlen(filename) - 1] = 'z';
    file = fopen(filename, "w");

    for(i = 0; i < length; i++) for(j = 0; j < 2; j++){
        base26 = intToBase26(opcodes[i][j]);
        fprintf(file, "%s", base26); free(base26);
    }

    return fclose(file) != 0;
}

/**
 * load the file and deserialize base26 strings to `opcodes` array.
 * @param filename name of file to read base26 strings.
 * @return the count of opcodes.
 */
size_t deserialize(char* filename){
    FILE* file; size_t i = 0, j = 0;
    char base26[MAX_BASE26_LENGTH];

    OPEN(filename, r) 0;
    while(fscanf(file, "%4s", base26) != EOF){
        opcodes[i][j] = base26toInt(base26);
        if(++j > 1) i++, j = 0;
    }

    return i;
}

int __compile(char* filename){
    size_t length;

    if(!checkExtension(filename, ".zzp")){
        printf("Error: The file \"%s\" isn't zzp source code.", filename);
        return 1;
    }

    length = compile(filename);
    return length ? serialize(filename, length) : 1;
}

int __execute(char* filename){
    size_t length;

    if(!checkExtension(filename, ".zzz")){
        printf("Error: The file \"%s\" isn't zzz executable code.", filename);
        return 1;
    }

    length = deserialize(filename);
    return execute(length);
}

int __encrypt(char* filename, char* key){
    FILE *file, *output;
    char c; size_t k = 0, keyLength;

    if(!checkExtension(filename, ".zzz")){
        printf("Error: The file \"%s\" isn't zzz executable code.", filename);
        return 1;
    }

    requireUpperCases(key, "key");
    OPEN(filename, r) 0;

    filename[strlen(filename) - 1] = 'e';
    output = fopen(filename, "w");
    keyLength = strlen(key);

    while(fscanf(file, "%c", &c) != EOF){
        if(!requireUpperCase(c, "file")) return fclose(file), 1;

        /* Vigenère cipher */
        c = (char) ('A' + ((c - 'A') + (key[k] - 'A')) % 26);

        fprintf(output, "%c", c);
        if(++k >= keyLength) k = 0;
    }

    fclose(file); fclose(output);
    return 0;
}

int __decrypt(char* filename, char* key){FILE *file, *output;
    char c; size_t k = 0, keyLength;

    if(!checkExtension(filename, ".zze")){
        printf("Error: The file \"%s\" isn't zze encrypted code.", filename);
        return 1;
    }

    requireUpperCases(key, "key");
    OPEN(filename, r) 0;

    filename[strlen(filename) - 1] = 'z';
    output = fopen(filename, "w");
    keyLength = strlen(key);

    while(fscanf(file, "%c", &c) != EOF){
        if(!requireUpperCase(c, "file")) return fclose(file), 1;

        /* Vigenère cipher */
        c = (char) ('A' + (26 + (c - 'A') - (key[k] - 'A')) % 26);

        fprintf(output, "%c", c);
        if(++k >= keyLength) k = 0;
    }

    fclose(file); fclose(output);
    return 0;
}

int main(int argc, char** argv){
    if(!strcmp(argv[argc - 1], "--debug")) DEBUG_MODE = 1;

    ARGC(2) toLowerCase(argv[1]);
    ARGC(3) COMMAND(compile) COMMAND(execute)
    ARGC(4) BICOMMAND(encrypt) BICOMMAND(decrypt)

    return printUsage(argv), 1;
}