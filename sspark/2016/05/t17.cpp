/**
 * @author ChalkPE <chalk@chalk.pe>
 * @since 2016-05-11
 */

#include <stdio.h>
#define max(x, y) ((x > y) ? x : y)
#define q printf("세 점수를 공백으로 분리해서 입력하세요: ")

int main(){
    int a, b, c; q; scanf("%d %d %d", &a, &b, &c);
    return 0 * printf("%d \n", max(a, max(b, c)));
}