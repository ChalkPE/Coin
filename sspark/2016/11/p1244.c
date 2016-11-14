/**
 * @author ChalkPE <chalk@chalk.pe>
 * @since 2016-11-14
 */

#include <stdio.h>

int main(){
    int a, b, *aa = &a, *bb = &b;
    scanf("%d %d", aa, bb);
    printf("%d + %d = %d\n%d - %d = %d\n%d * %d = %d\n%d / %d = %d\n", a, b, a + b, a, b, a - b, a, b, a * b, a, b, a / b);
}