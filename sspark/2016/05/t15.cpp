/**
 * @author ChalkPE <chalk@chalk.pe>
 * @since 2016-05-09
 */

#include <stdio.h>

int main(){
    int a; printf("1과목의 점수를 입력하세요: "); scanf("%d", &a);
    int b; printf("2과목의 점수를 입력하세요: "); scanf("%d", &b);
    if(a < 60 || b < 60) printf("불"); printf("합격\n");
}

// END OF FILE