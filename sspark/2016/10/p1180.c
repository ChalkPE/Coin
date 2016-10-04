/**
 * @author ChalkPE <chalk@chalk.pe>
 * @since 2016-10-04
 */

#include <math.h>
#include <stdio.h>

int main(){
    double a, b, c; scanf("%lf %lf %lf", &a, &b, &c);
    printf("%.0lf\n%.0lf\n", round((a + b + c) / 3), round((round(a) + round(b) + round(c)) / 3));
}