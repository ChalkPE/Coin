/**
 * @author ChalkPE <chalk@chalk.pe>
 * @since 2016-06-03
 */

#include <stdio.h>

int main(){
    int a, b; char c; for(;;){
        printf("밑변의 길이 = "); scanf("%d", &a);
        printf("높이 = "); scanf("%d", &b);

        printf("입력한 삼각형의 넓이는 %.1lf입니다.\n계속하시겠습니까? ", a * b / 2.0); scanf(" %c", &c);
        if(c != 'y' && c != 'Y') return 0;
    }
}
