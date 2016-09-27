/**
 * @author ChalkPE <chalk@chalk.pe>
 * @since 2016-09-27
 */

#include <math.h>
#include <stdio.h>

int main(){
    int i, j; double v[4];
    for(scanf("%lf %lf %lf", v, v + 1, v + 2), i = 0; i < 2 || 0 * printf("%.0lf %.0lf %.0lf\n", ceil(v[0]), floor(v[2]), floor(v[1] + 0.5)); i++) for(j = i + 1; j < 3; j++) if(v[i] < v[j]) v[3] = v[i], v[i] = v[j], v[j] = v[3];
}