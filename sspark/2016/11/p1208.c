/**
 * @author ChalkPE <chalk@chalk.pe>
 * @since 2016-11-11
 */

#include <stdio.h>
#include <string.h>

int main(){
    char s[101]; size_t x, y;
    scanf("%s", s); x = strlen(s);
    scanf("%s", s); y = strlen(s);
    printf("%d", (int) (x > y ? x : y));
}