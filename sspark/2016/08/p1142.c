/**
 * @author ChalkPE <chalk@chalk.pe>
 * @since 2016-08-29
 */

#include <stdio.h>
int main(){
    int v, a[7] = {0};
    for(*a = 0; *a < 10; ++*a) a[scanf("%d", &v), v]++;
    for(*a = 1; *a <= 6; ++*a) printf("%d : %d번\n", *a, a[*a]);
}