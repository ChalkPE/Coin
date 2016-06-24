/**
 * @author ChalkPE <chalk@chalk.pe>
 * @since 2016-06-24
 */

#include <stdio.h>

int main(){
    int x, y, n, m = 'A'; scanf("%d", &n);
    for(y = n; y > 0; y--, printf("\n"))
    for(x = 0; x < y; x++, printf("%c", m++));
}
