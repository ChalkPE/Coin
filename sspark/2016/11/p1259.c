/**
 * @author ChalkPE <chalk@chalk.pe>
 * @since 2016-11-28
 */

#include <stdio.h>

int main(){
    /* freopen("input.txt", "r", stdin), freopen("output.txt", "w", stdout); */
    double x; while(scanf("%lf", &x) != EOF) printf("%.2lf\n", x / 6.28);
}