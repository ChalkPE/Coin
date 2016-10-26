/**
 * @author ChalkPE <chalk@chalk.pe>
 * @since 2016-10-27
 */

#include <stdio.h>

int main(){
    int n, x = 1, y = 2, z;
    if(scanf("%d", &n), n < 3) return 0 * printf("%d", n);
    else while(n --> 2) z = x * y % 100, x = y, y = z; printf("%d", z);
}