/**
 * @author ChalkPE <chalkpe@gmail.com>
 * @since 2016-03-17
 */

#include <stdio.h>
int main(){
    int a, b;
    printf("정수 입력 "); scanf("%d %d", &a, &b);
    printf("곱 = %d\n몫 = %d", a * b, a / b);
    return 0;
}