/**
 * @author ChalkPE <chalk@chalk.pe>
 * @since 2016-06-24
 */

#include <stdio.h>

int main(){
    int x, y, n; scanf("%d", &n);
    for(y = n; y >= 1; y--, printf("\n")) for(x = 0; x < y; x++, printf("*"));
    for(y = 1; y <= n; y++, printf("\n")) for(x = 0; x < y; x++, printf("*"));
}
