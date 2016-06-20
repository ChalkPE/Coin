/**
 * @author ChalkPE <chalk@chalk.pe>
 * @since 2016-06-20
 */

#include <stdio.h>

int main(){
    int a, b, x, y, v, i;
    scanf("%d %d", &a, &b);
    v = a < b ? 1 : -1;

    for(y = 1; y < 10; y++, printf("\n")) for(i = a; ; i += v){
        printf("%d * %d = %2d   ", i, y, i * y);
        if(i == b) break;
    }
}
