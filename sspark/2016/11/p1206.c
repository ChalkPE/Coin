/**
 * @author ChalkPE <chalk@chalk.pe>
 * @since 2016-11-10
 */

#include <stdio.h>
#include <ctype.h>

int main(){
    char s[100]; size_t i;
    for(scanf("%s", s), i = 0; s[i]; i++) if(isalnum(s[i])) putchar(isalpha(s[i]) ? tolower(s[i]) : s[i]);
}