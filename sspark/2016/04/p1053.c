/**
 * @author ChalkPE <chalk@chalk.pe>
 * @since 2016-04-27
 */

#include <stdio.h>
int main(){
    double grade; scanf("%lf", &grade); switch((int) grade){
        default: printf("다음 학기에 재수강하세요.");
        break; case 4: printf("장학금을 받아가세요.");
        break; case 3: printf("다음 학기를 준비하세요.");
        break; case 2: printf("계절 학기에 등록하세요.");
    }
}

// END OF FILE