/**
 * @author ChalkPE <chalk@chalk.pe>
 * @since 2016-11-08
 */

#include <stdio.h>
#include <ctype.h>

int main(){
    char s[100]; size_t i = 0; scanf("%s", s);
    while((*s = s[i++])) if(isalpha(*s)) putchar(toupper(*s));
}