/**
 * @author ChalkPE <chalk@chalk.pe>
 * @since 2016-04-21
 */

#include <stdio.h>
int main(){
    double a, b, c; int sum, avg;      // define    variables
    scanf("%lf %lf %lf", &a, &b, &c);  // get       abc       from user
    sum = (int) a + (int) b + (int) c; // calculate sum
    avg = (int) ((a + b + c) / 3.0);   // calculate avg
    printf("총점 %d점\n", sum);         // print     sum       to   console
    printf("평균 %d점\n", avg);         // print     avg       to   console
    return 0;
}