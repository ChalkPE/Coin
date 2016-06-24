/**
 * @author ChalkPE <chalk@chalk.pe>
 * @since 2016-04-29
 */

#include <stdio.h>
int main(){
    printf("1. 개\n2. 고양이\n3. 병아리\n영어로 알고 싶은 번호를 입력하세요. ");
    int i; scanf("%d", &i); switch(i){
        default: printf("I don't know.");
        break; case 1: printf("dog");
        break; case 2: printf("cat");
        break; case 3: printf("chick");
    }
}

// END OF FILE