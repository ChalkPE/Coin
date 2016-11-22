/**
 * @author ChalkPE <chalk@chalk.pe>
 * @since 2016-11-22
 */

#include <stdio.h>
#include <stdlib.h>

int main(){
    int n, i, j, k, *a;
    for(i = 0, scanf("%d", &n), a = malloc(n * sizeof(int)); i < n; scanf("%d", a + i++));
    for(i = 0; i < n; printf("%d ", a[i++])) for(j = i + 1; j < n; j++) if(a[i] < a[j]) k = a[i], a[i] = a[j], a[j] = k;
}