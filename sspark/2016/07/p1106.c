/**
 * @author ChalkPE <chalkpe@gmail.com>
 * @since 2016-07-04
 */

#include <stdio.h>
int main(){
    int x, y, n, m;
    for(m = y = 0 * scanf("%d", &n); y < n; y++, printf("\n")){
        for(x = 0; x < y; x++, printf("  "));
        for(x = y; x < n; x++, printf("%d ", ++m));
    }
}

//END OF FILE