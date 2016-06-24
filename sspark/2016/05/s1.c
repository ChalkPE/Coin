/**
 * @author ChalkPE <chalk@chalk.pe>
 * @since 2016-05-18
 */

#include <stdio.h>
#define q(n, h, w) printf("%s의 키와 몸무게 입력 ", n), scanf("%d %d", &h, &w)

int main(){
    int a, b, c, d; q("철수", a, b); q("영희", c, d);
    return 0 * printf("%d", a > c && b > d);
}