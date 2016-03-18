/**
 * @author ChalkPE <chalkpe@gmail.com>
 * @since 2016-03-18
 */

#include <stdio.h>
int main(){
    double y;
    printf("몇 야드인지 입력하시오. ");
    scanf("%lf", &y);

    printf("%.1lf야드 = %.1lfcm", y , 91.44 * y);

    return 0;
}