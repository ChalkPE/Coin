/**
 * @author ChalkPE <chalk@chalk.pe>
 * @since 2016-05-27
 */

#include <stdio.h>

int main(){
    int n; for(;;){
        printf("정수를 입력하세요. "); scanf("%d", &n);
        if(n) printf("%s수입니다. \n", n > 0 ? "양" : "음"); else return 0;
    }
}
