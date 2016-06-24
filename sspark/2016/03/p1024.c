/**
 * @author ChalkPE <chalkpe@gmail.com>
 * @since 2016-03-18
 */

#include <stdio.h>
int main(){
    int a = 50; double b = 100.12;
    printf("%.2lf * %d = %d", b, a, (int) (a * b));
    return 0;
}