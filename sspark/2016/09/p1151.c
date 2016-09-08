/**
 * @author ChalkPE <chalk@chalk.pe>
 * @since 2016-09-08
 */

#include <stdio.h>

int main(){
    int x, y; char a[3][5];

    for(y = 0; y < 3; y++) for(x = 0; x < 5; x++) scanf(" %c", &a[y][x]);
    for(y = 0; y < 3; y++, printf("\n")) for(x = 0; x < 5; x++) printf("%c ", a[y][x] + 32);
}