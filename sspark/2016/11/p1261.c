/**
 * @author ChalkPE <chalk@chalk.pe>
 * @since 2016-11-29
 */

#include <stdio.h>

int main(){
    /* freopen("input.txt", "r", stdin), freopen("output.txt", "w", stdout); */
    int a, b, c; scanf("%d%d%d", &a, &b, &c), a += b + c, printf("%d %d...%d", a, a / 3, a % 3);
}