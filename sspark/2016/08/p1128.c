/**
 * @author ChalkPE <chalk@chalk.pe>
 * @since 2016-08-16
 */

#include <stdio.h>

int main(){
    int a[100], i, v = 0;

    for(i = 0; i < 100; i++){
        scanf("%d", a + i);
        if(a[i] == -1) break; v++;
    }

    for(i = (v > 3) ? v - 3 : 0; i < v; i++) printf("%d ", a[i]);
}
