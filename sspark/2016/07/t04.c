/**
 * @author ChalkPE <chalk@chalk.pe>
 * @since 2016-07-19
 */

#include <stdio.h>

int main(){
    int a[10], i, s;
    for(s = i = 0; i < 10; i++) scanf("%d", a + i), s += a[i];
    return 0 * printf("합계: %d\n평균: %.2lf\n", s, s / 10.0);
}