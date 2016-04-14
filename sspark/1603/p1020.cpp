/**
 * @author ChalkPE <chalkpe@gmail.com>
 * @since 2016-03-17
 */

#include <stdio.h>
int main(){
    double a, b; char c;
    scanf("%lf %lf %c", &a, &b, &c);
    printf("%.2lf\n%.2lf\n%c", a, b, c);
    return 0;
}