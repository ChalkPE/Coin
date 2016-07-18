/**
 * @author ChalkPE <chalk@chalk.pe>
 * @since 2016-07-18
 */

#include <stdio.h>

int main(){
    char a[53] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz"; int n, x, y, w = 0, v = 1;
    for(scanf("%d", &n), y = n - 1; y < n; y -= v = !y ? -v : v, printf("\n")) for(x = 0; x <= y; x++, printf("%c", a[w++]));
}