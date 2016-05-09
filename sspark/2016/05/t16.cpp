/**
 * @author ChalkPE <chalk@chalk.pe>
 * @since 2016-05-09
 */

#include <stdio.h>

int main(){
    int s; printf("과목의 점수를 입력하세요: ");
    scanf("%d", &s); switch(s / 10){
        default: printf(s >= 90 ? "수" : "가");
        break; case 8: printf("우");
        break; case 7: printf("미");
        break; case 6: printf("양");
    } printf("\n");
}

// END OF FILE