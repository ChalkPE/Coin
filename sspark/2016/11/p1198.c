/**
 * @author ChalkPE <chalk@chalk.pe>
 * @since 2016-11-01
 */

#include <stdio.h>
#include <string.h>

int main(){
    char s[101]; int n, i, l;
    scanf("%s %d", s, &n), l = (int) strlen(s);
    for(i = 0; i < l && i < n; putchar(s[l - ++i]));
}