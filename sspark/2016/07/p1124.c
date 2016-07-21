/**
 * @author ChalkPE <chalk@chalk.pe>
 * @since 2016-07-21
 */

#include <stdio.h>
#define swap(x, y) if(x > y){ k = x; x = y; y = k; }

int main(){
    int i, j, k, a[10];
    for(i = 0; i < 10; i++) scanf("%d", a + i);
    for(i = 1; i < 10; i++) for(j = 0; j < 10; j++) swap(a[i], a[j]);
    for(i = 0; i < 10; i++) printf("%d ", a[i]);
}