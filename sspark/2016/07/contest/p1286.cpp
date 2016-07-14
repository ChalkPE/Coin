/**
 * @author ChalkPE <chalk@chalk.pe>
 * @since 2016-07-14
 */

#include <stdio.h>
int main(){
    int n, m, y, x; scanf("%d", &n);

    for(x = 0; x < n; x++) printf("*");
    printf("\n");

    m = (n - 1) / 2;

    for(y = 1; y <= m; y++, printf("\n")){
        for(x = 0; x <= m - y; x++) printf("*");
        for(x = 1; x <= y * 2 - 1; x++) printf(" ");
        for(x = 0; x <= m - y; x++) printf("*");
    }

    for(y = m - 1; y >= 1; y--, printf("\n")){
        for(x = 0; x <= m - y; x++) printf("*");
        for(x = 1; x <= y * 2 - 1; x++) printf(" ");
        for(x = 0; x <= m - y; x++) printf("*");
    }

    for(x = 0; x < n; x++) printf("*");
    printf("\n");
}