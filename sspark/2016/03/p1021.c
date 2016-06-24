/**
 * @author ChalkPE <chalkpe@gmail.com>
 * @since 2016-03-17
 */

#include <stdio.h>
int main(){
    float a, b; double c;
    scanf("%f %f %lf", &a, &b, &c);
    printf("%.3f\n%.3f\n%.3lf", a, b, c);
    return 0;
}