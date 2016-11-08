/**
 * @author ChalkPE <chalk@chalk.pe>
 * @since 2016-11-08
 */

#include <stdio.h>
#include <ctype.h>

int main(){
    size_t i; char c, s[100]; scanf("%s", s);
    while((c = s[i++])) if(isalpha(c)) putchar(toupper(c));
}