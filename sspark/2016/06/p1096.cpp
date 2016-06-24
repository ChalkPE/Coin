/**
 * @author ChalkPE <chalk@chalk.pe>
 * @since 2016-06-24
 */

#include <stdio.h>

int main(){
    int x, y, n; scanf("%d", &n);
    for(y = n; y >= 1; y--, printf("\n")){
        for(x = y; x < n;     x++, printf(" "));
        for(x = 1; x < 2 * y; x++, printf("*"));
    }
}
