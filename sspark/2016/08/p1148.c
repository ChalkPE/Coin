/**
 * @author ChalkPE <chalk@chalk.pe>
 * @since 2016-09-02
 */

#include <stdio.h>

int main(){
    int x, y, z, a[2][2][3];
    for(z = 0; z < 2; z++) for(printf("%s 번째 배열 입력\n", z ? "두" : "첫"), y = 0; y < 2; y++) for(x = 0; x < 3; x++) scanf("%d", &a[z][y][x]);
    for(y = 0; y < 2; y++, printf("\n")) for(x = 0; x < 3; x++) printf("%d ", a[0][y][x] * a[1][y][x]);
}