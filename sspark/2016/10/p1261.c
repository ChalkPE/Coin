/**
 * @author ChalkPE <chalk@chalk.pe>
 * @since 2016-10-21
 */

#include <stdio.h>
int main(){
    int a[4];

    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    scanf("%d %d %d", a + 1, a + 2, a + 3);
    *a = a[1] + a[2] + a[3];
    printf("%d %d...%d", *a, *a / 3, *a % 3);

    return 0;
}