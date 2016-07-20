/**
 * @author ChalkPE <chalk@chalk.pe>
 * @since 2016-07-20
 */

#include <stdio.h>
int main() {
    int a[100], i, j;
    for(i = 0; i < 100; i++) if(scanf("%d", a + i), !a[i]) { for(j = i; j > 0; printf("%d ", a[--j])); return 0; }
}