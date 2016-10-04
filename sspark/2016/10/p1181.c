/**
 * @author ChalkPE <chalk@chalk.pe>
 * @since 2016-10-04
 */

#define n 7
#include <stdio.h>

int main(){
    int i, j, k, a[n]; for(i = 0; i < n; scanf("%d", a+ i++));
    for(i = n - 1; i >= n - 3; i--) for(j = 0; j < i; j++) if(a[j] > a[j + 1]) k = a[j], a[j] = a[j + 1], a[j + 1] = k;
    for(i = 0; i < n; printf("%d ", a[i++]));
}