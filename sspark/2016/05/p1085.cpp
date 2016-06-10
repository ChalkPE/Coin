/**
 * @author ChalkPE <chalk@chalk.pe>
 * @since 2016-06-10
 */

#include <stdio.h>

int main(){
    int n, i, v; double s = 0;
    for(scanf("%d", &n), i = 0; i < n; i++) scanf("%d", &v), s += v;
    return 0 * printf("%.2lf\n", s / n);
}