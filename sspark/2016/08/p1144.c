/**
 * @author ChalkPE <chalk@chalk.pe>
 * @since 2016-08-30
 */

#include <stdio.h>
int main(){
    int a[11]; scanf("%d %d", a + 1, a + 2), printf("%d %d", a[1], a[2]);
    for(*a = 3; *a <= 10; ++*a) printf(" %d", a[*a] = (a[*a - 1] + a[*a - 2]) % 10);
}