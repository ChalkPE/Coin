/**
 * @author ChalkPE <chalk@chalk.pe>
 * @since 2016-11-10
 */

#include <stdio.h>
#include <string.h>

int main(char c, char* p, char s[101]){
    (scanf("%s %c", s, &c), p = strchr(s, c)) ? printf("%lu\n", p - s) : puts("No\n");
}