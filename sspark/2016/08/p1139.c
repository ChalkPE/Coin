/**
 * @author ChalkPE <chalk@chalk.pe>
 * @since 2016-08-26
 */

#include <stdio.h>

int main(){
    int x, y, z, a[2][2][4];
    for(z = 0; z < 2; z++) for(printf("%s 번째 배열\n", z ? "두" : "첫"), y = 0; y < 2; y++) for(x = 0; x < 4; x++) scanf("%d", &a[z][y][x]);
    for(y = 0; y < 2; y++, printf("\n")) for(x = 0; x < 4; x++) printf("%d ", a[0][y][x] * a[1][y][x]);
}