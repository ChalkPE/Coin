/**
 * @author ChalkPE <chalkpe@gmail.com>
 * @since 2016-06-29
 */

#include <stdio.h>
int main(){
    int n, x, y; scanf("%d", &n);
    for(y = n; y >= 1; y--, printf("\n")){
        for(x = n; x > y;     x--, printf(" "));
        for(x = 1; x < y * 2; x++, printf("*"));
    }

    for(y = 2; y <= n; y++, printf("\n")){
        for(x = n; x > y;     x--, printf(" "));
        for(x = 1; x < y * 2; x++, printf("*"));
    }
}

//END OF FILE