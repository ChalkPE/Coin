/**
 * @author ChalkPE <chalk@chalk.pe>
 * @since 2016-07-18
 */

#include <stdio.h>

int main(int n, int x, int y, int w, int v){
    char a[54] = " ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
    for(w = v = 1, scanf("%d", &n), y = n - 1; y < n; y -= v = !y ? -v : v, printf("\n")) for(x = 0; x <= y; printf("%c", a[x++, w++]));
}