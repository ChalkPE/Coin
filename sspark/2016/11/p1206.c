/**
 * @author ChalkPE <chalk@chalk.pe>
 * @since 2016-11-10
 */

#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>

int main(size_t i, char* s){
    for(i = 0, scanf("%s", s = malloc(101)); s[i]; i++) isalnum(s[i]) && putchar(tolower(s[i]));
}