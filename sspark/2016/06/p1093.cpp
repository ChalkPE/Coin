/**
 * @author ChalkPE <chalk@chalk.pe>
 * @since 2016-06-20
 */

#include <stdio.h>

int main(){
    int v, x, y; scanf("%d", &v);
    for(y = 0; y < v; y++, printf("\n")) for(x = 0; x <= y; x++) printf("*");
}
