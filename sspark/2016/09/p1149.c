/**
 * @author ChalkPE <chalk@chalk.pe>
 * @since 2016-09-02
 */

#include <stdio.h>
#define w(i, j) a[i][j] += z

int main(){
    int x, y, z, a[5][3] = {0};
    for(y = 1; y <= 4; y++) for(x = 1; x <= 2; x++) scanf("%d", &z), w(0, 0), w(0, x), w(y, 0);

    for(printf("가로평균 "), y = 0; y < 4 || 0 * printf("\n"); printf("%d ", a[++y][0] / 2));
    for(printf("세로평균 "), x = 0; x < 2 || 0 * printf("\n"); printf("%d ", a[0][++x] / 4));
    return 0 * printf("전체평균 %d\n", a[0][0] / 8);
}