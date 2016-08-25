/**
 * @author ChalkPE <chalk@chalk.pe>
 * @since 2016-08-25
 */

#include <stdio.h>

int main(){
    int x, y, a[3][5] = {{5, 8, 10, 6, 4}, {11, 20, 1, 13, 2}, {7, 9, 14, 22, 3}};
    for(y = 0; y < 3; y++, printf("\n")) for(x = 0; x < 5; printf("%2d ", a[y][x++]));
}