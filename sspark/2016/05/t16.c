/**
 * @author ChalkPE <chalk@chalk.pe>
 * @since 2016-05-09
 */

#include <stdio.h>
#define p(format, ...) printf(format, ##__VA_ARGS__)

int main(){
    int s; printf("과목의 점수를 입력하세요: ");
    scanf("%d", &s); switch(s / 10){
        default: p(s >= 90 ? "수" : "가");
        break; case 8: p("우");
        break; case 7: p("미");
        break; case 6: p("양");
    } return p("\n") * 0;
}

// END OF FILE