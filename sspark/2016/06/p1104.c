/**
 * @author ChalkPE <chalkpe@gmail.com>
 * @since 2016-06-29
 */

#include <stdio.h>
int main(){
    int n, x, y; scanf("%d", &n);
    for(y = 1; y <= n; y++, printf("\n")){
        for(x = y; x < n; x++, printf("  "));
        for(x = 0; x < y; x++, printf("%d ", x));
    }
}

//END OF FILE