/**
 * @author ChalkPE <chalk@chalk.pe>
 * @since 2016-11-10
 */

#include <stdio.h>
#include <string.h>

int main(){
    char s[100]; int x, y, len;
    scanf("%s", s), len = (int) strlen(s);
    for(y = len - 1; y >= 0; y--) for(x = 0; x < len || 0 * printf("\n"); x++) printf("%c", s[(x + y) % len]);
}