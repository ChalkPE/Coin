/**
 * @author ChalkPE <chalk@chalk.pe>
 * @since 2016-08-26
 */

#include <stdio.h>
int main(){
    int x, y, a[6][6] = {0, 0, 0, 0, 0, 0, 1};
    for(y = 1; y <= 5; y++) for(x = 1; x <= 5; x++) a[y][x] = a[y - 1][x] + a[y][x - 1];
    for(y = 1; y <= 5; y++, printf("\n")) for(x = 1; x <= 5; x++) printf("%d ", a[y][x]);
}