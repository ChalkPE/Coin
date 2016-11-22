/**
 * @author ChalkPE <chalk@chalk.pe>
 * @since 2016-11-22
 */

#include <stdio.h>
#include <stdlib.h>

int main(int i){
    double *a = malloc(5 * sizeof(double));
    for(i = 0; i < 5; scanf("%lf", a+ i++));
    for(i = 0; i < 5; printf("%.1lf ", a[i++]));
}