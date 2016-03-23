/**
 * @author ChalkPE <chalkpe@gmail.com>
 * @since 2016-03-23
 */

#include <stdio.h>
int main(){
    int a, b;
    scanf("%d %d", &a, &b);

    a += 100; b %= 10;
    printf("%d %d", a, b);

    return 0;
}