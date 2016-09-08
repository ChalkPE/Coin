/**
 * @author ChalkPE <chalk@chalk.pe>
 * @since 2016-09-08
 */

#include <stdio.h>

int main(){
    int x, a[7] = {0};
    while(scanf("%d", &x), x) a[x /= 10, x >= 6 ? 6 : x]++;
    for(x = 1; x <= 6; x++) printf(x >= 6 ? "어르신" : "%d0대", x), printf(" : %d명\n", a[x]);
}