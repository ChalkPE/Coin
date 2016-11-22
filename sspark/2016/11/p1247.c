/**
 * @author ChalkPE <chalk@chalk.pe>
 * @since 2016-11-22
 */

#include <stdio.h>
#include <stdlib.h>

int main(){
    int i, n; double *a, s = 0;
    for(i = 0, scanf("%d", &n), a = malloc(n * sizeof(double)); i < n; scanf("%lf", a + i), s += a[i++]);
    for(i = 0; i < n || 0 * printf("\n합계 : %.2lf\n평균 : %.2lf\n", s, s / n); printf("%.2lf ", a[i++]));
}