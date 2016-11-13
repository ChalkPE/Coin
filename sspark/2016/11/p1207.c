/**
 * @author ChalkPE <chalk@chalk.pe>
 * @since 2016-11-10
 */

#include <stdio.h>
#include <string.h>

int main(){
    char c, *p, s[101];
    return (scanf("%s %c", s, &c), p = strchr(s, c)) ? printf("%lu\n", p - s) : puts("No\n"), 0;
}