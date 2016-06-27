/**
 * @author ChalkPE <chalkpe@gmail.com>
 * @since 2016-06-27
 */

#include <stdio.h>
int main(){
    int n, x, y, a = 1, b = 'A'; scanf("%d", &n);
    for(y = n; y > 0; y--, printf("\n")){
        for(x = y; x >= 1; x--, printf("%d ", a++));
        for(x = n; x >= y; x--, printf("%c ", b++));
    }
    return 0;
}

//END OF FILE