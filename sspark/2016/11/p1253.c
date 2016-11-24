/**
 * @author ChalkPE <chalk@chalk.pe>
 * @since 2016-11-24
 */

#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int main(){
    int i, n, *a, min = INT_MAX, max = INT_MIN;

    scanf("%d", &n), a = malloc(n * sizeof(int));
    for(i = 0; i < n || 0 * printf("최대값 : %d\n최소값 : %d\n", max, min); i++){
        scanf("%d", a + i);
        if(a[i] < min) min = a[i];
        if(a[i] > max) max = a[i];
    }
}