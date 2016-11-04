/**
 * @author ChalkPE <chalk@chalk.pe>
 * @since 2016-11-02
 */

#include <ctype.h>
#include <stdio.h>
#include <string.h>

#define KEYWORD_NOP       0
#define KEYWORD_GET       1
#define KEYWORD_SET       2
#define KEYWORD_SCAN      3
#define KEYWORD_PRINT     4
#define KEYWORD_ADD       5
#define KEYWORD_SUBTRACT  6
#define KEYWORD_MULTIPLY  7
#define KEYWORD_DIVIDE    8
#define KEYWORD_REMAINDER 9

#define KEYWORD(x) if(!strcmp(keyword, "##x##")) return KEYWORD_##x##;

#define MAX_MEMORY 1024
char memory[MAX_MEMORY];

void toUpperCase(char* s){
    for(; *s; ++s) *s = (char) toupper(*s);
}

int readKeyword(char* keyword){
    KEYWORD(GET) KEYWORD(SET) KEYWORD(SCAN) KEYWORD(PRINT)
    KEYWORD(ADD) KEYWORD(SUBTRACT) KEYWORD(MULTIPLY) KEYWORD(DIVIDE) KEYWORD(REMAINDER)
    KEYWORD(NOP) return 0;
}

int run(char* filename){
    FILE* file = fopen(filename, "r");
    char keyword[1024]; int argument, p = 0;

    if(!file){
        printf("Error: The file \"%s\" doesn't exist.", filename);
        return 1;
    }

    while(fscanf(file, "%s %d", keyword, &argument) > 0){
        toUpperCase(keyword);

        switch(readKeyword(keyword)){
            default: printf("Error: Unknown keyword \"%s\".", keyword);
            break; case KEYWORD_NOP:
            break; case KEYWORD_GET:   p = argument;
            break; case KEYWORD_SET:   memory[p] = (char) argument;
            break; case KEYWORD_SCAN:  memory[p] = (char) getchar();
            break; case KEYWORD_PRINT: putchar(memory[p]);
            break; case KEYWORD_ADD:       memory[p] += argument;
            break; case KEYWORD_SUBTRACT:  memory[p] -= argument;
            break; case KEYWORD_MULTIPLY:  memory[p] *= argument;
            break; case KEYWORD_DIVIDE:    memory[p] /= argument;
            break; case KEYWORD_REMAINDER: memory[p] %= argument;
        }
    }

    return 0;
}

int main(){
    char filename[128];
    return printf("FILE> "), scanf("%s", filename), run(filename);
}

