/**
 * @author ChalkPE <chalk@chalk.pe>
 * @since 2016-06-09
 */

#include <stdio.h>

int main(){
    int v, i, n; double a, s = 0;
    for(scanf("%d", &n), i = 0; i < n; i++) s += (scanf("%d", &v), v);
    return 0 * (a = s / n, printf("평균 : %.1lf\n%s합격\n", a, a < 80 ? "불" : ""));
}