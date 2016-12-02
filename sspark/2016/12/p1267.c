/**
 * @author ChalkPE <chalk@chalk.pe>
 * @since 2016-12-02
 */

#include <stdio.h>
#include <stdlib.h>

int main(int n){
    int i, j; double *a, b;
    scanf("%d", &n), a = calloc((size_t) n, sizeof(double));
    for(i = 0; i < 3 * n; i++) scanf("%d", &j), a[i / 3] += j;
    for(i = 0; i < n; i++) for(j = i + 1; j < n; j++) if(a[i] < a[j]) b = a[i], a[i] = a[j], a[j] = b;
    for(i = 0; i < n; i++) printf("%.1lf\n", a[i] / 3);
}