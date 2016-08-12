/**
 * @author ChalkPE <chalk@chalk.pe>
 * @since 2016-07-21
 */

#include <stdio.h>

#define n 10
#define swap(x, y) if(x < y) k = x, x = y, y = k

int main(){
    int i, j, k, a[n];
    for(i = 0; i < n; i++) scanf("%d", a + i);
    for(i = 0; i < n - 1; i++) for(j = i + 1; j < n; j++) swap(a[i], a[j]);
    for(i = 0; i < n; i++) printf("%d ", a[i]);
}