/**
 * @author ChalkPE <chalk@chalk.pe>
 * @since 2016-05-12
 */

#include <stdio.h>

int main(){
    int y, m, d; printf("당신의 사주를 봐 드립니다. \n연도, 월, 일을 차례대로 입력하세요:");
    scanf("%d %d %d", &y, &m, &d); return 0 * printf("당신의 사주는 %s입니다.\n", (y - m + d) % 10 ? "그럭저럭" : "대박");
}