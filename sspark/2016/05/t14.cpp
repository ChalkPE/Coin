/**
 * @author ChalkPE <chalk@chalk.pe>
 * @since 2016-05-09
 */

#include <stdio.h>

int main(){
    int y, m;
    printf("점수를 입력하세요: "); scanf("%d", &y);
    printf("힙격점을 입력하세요: "); scanf("%d", &m);
    printf("%s합격\n", y >= m ? "" : "불");
}

// END OF FILE