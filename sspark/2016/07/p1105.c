/**
 * @author ChalkPE <chalkpe@gmail.com>
 * @since 2016-07-01
 */

#include <stdio.h>
int main(){
    int n, x, y, a, b;
    for(scanf("%d", &n), a = 'A', b = 0, y = 0; y < n; y++, printf("\n")) for(x = 0; x < n; x++, x + y <= n ? printf("%c ", a++) : printf("%d ", b++));
}

//END OF FILE