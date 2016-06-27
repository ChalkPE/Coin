/**
 * @author ChalkPE <chalkpe@gmail.com>
 * @since 2016-06-27
 */

#include <stdio.h>
int main(){
    int n, x, y; scanf("%d", &n);
    for(y = 1; y <= n; y++, printf("\n")) for(x = 0; x < y; x++, printf("*"));
    for(y = n; y >= 1; y--, printf("\n")) for(x = 1; x < y; x++, printf("*"));
}

//END OF FILE