/**
 * @author ChalkPE <chalk@chalk.pe>
 * @since 2016-09-26
 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    int a, b; double c, d;
    scanf("%d %d", &a, &b), printf("%d\n", abs(a) > abs(b) ? a : b);
    scanf("%lf %lf", &c, &d), printf("%.2lf\n", fabs(c) < fabs(d) ? c : d);
}