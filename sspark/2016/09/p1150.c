/**
 * @author ChalkPE <chalk@chalk.pe>
 * @since 2016-09-06
 */

#include <stdio.h>

int main(){
    int x, y, n, a[11][11] = {0};
    for(scanf("%d", &n), a[1][1] = y = 1; y <= n; y++) for(x = 1; x <= y; x++) a[y][x] += a[y - 1][x - 1] + a[y - 1][x];
    for(y = n; y >= 1; y--, printf("\n")) for(x = 1; x <= y; x++) printf("%d ", a[y][x]);
}