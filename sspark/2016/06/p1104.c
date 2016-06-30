/**
 * @author ChalkPE <chalkpe@gmail.com>
 * @since 2016-06-29
 */

#include <stdio.h>
int main(){
    int n, x, y; scanf("%d", &n);
    for(y = 1; y <= n; y++, printf("\n")){
        for(x = y; x < n;  printf("  "),     x++);
        for(x = 1; x <= y; printf("%d ", x), x++);
    }
}

//END OF FILE