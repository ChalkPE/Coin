/**
 * @author ChalkPE <chalk@chalk.pe>
 * @since 2016-09-30
 */

#include <math.h>
#include <stdio.h>

int main(){ double a, b; return scanf("%lf %lf", &a, &b), 0 * printf("%.0lf\n", 1 - ceil(sqrt(fmin(a, b))) + floor(sqrt(fmax(a, b)))); }