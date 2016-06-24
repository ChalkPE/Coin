/**
 * @author ChalkPE <chalk@chalk.pe>
 * @since 2016-05-12
 */

#include <stdio.h>
#define n 3

int main(){
    int a[n], i; printf("세 터널의 높이를 차례대로 입력하세요:"); for(i = 0; i < n; i++){
        scanf("%d", &a[i]); if(a[i] <= 170) return 0 * printf("충돌 %d", a[i]);
    } return 0 * printf("무사 통과");
}

/*
int main(){
    int a, b, c; printf("세 터널의 높이를 차례대로 입력하세요:");
    scanf("%d %d %d", &a, &b, &c); switch(true){
        case a <= 170: return 0 * printf("충돌 %d", a);
        case b <= 170: return 0 * printf("충돌 %d", b);
        case c <= 170: return 0 * printf("충돌 %d", c);
        default: return 0 * printf("무사 통과");
    }
}
*/