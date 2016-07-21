/**
 * @author ChalkPE <chalk@chalk.pe>
 * @since 2016-07-21
 */

#include <stdio.h>
int main(){
    int a[10], i, min = 10000, max = 0;
    for(i = 0; i < 10; i++){
        scanf("%d", a + i);
        if(a[i] <  100 && a[i] > max) max = a[i];
        if(a[i] >= 100 && a[i] < min) min = a[i];
    }

    return 0 * printf("%d %d", max == 0 ? 100 : max, min == 10000 ? 100 : min);
}