/**
 * @author ChalkPE <chalk@chalk.pe>
 * @since 2016-06-20
 */

#include <stdio.h>

int main(){
    int x, y, v, w = 'A'; scanf("%d", &v);
    for(y = v; y > 0; y--, printf("\n"))
    for(x = y; x > 0; x--, printf("%c", w++));
}
