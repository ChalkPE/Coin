/**
 * @author ChalkPE <chalk@chalk.pe>
 * @since 2016-11-01
 */

#include <stdio.h>

int main(){
    int i = 0, c = 1;
    char s[100]; gets(s);
    while((*s = s[i++])) c += *s == ' ';
    return printf("%d", c), 0;
}