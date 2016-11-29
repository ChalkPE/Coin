/**
 * @author ChalkPE <chalk@chalk.pe>
 * @since 2016-11-29
 */

#include <stdio.h>

int main(){
    /* freopen("input.txt", "r", stdin), freopen("output.txt", "w", stdout); */
    double x, y; scanf("%lf%lf", &x, &y); printf("%.2lf %.2lf %.2lf", x, y, x + y);
}