/**
 * @author ChalkPE <chalk@chalk.pe>
 * @since 2016-05-11
 */

#include <stdio.h>
#define q printf("영어 소문자를 입력하세요: ")

int main(){
    char x; q; scanf("%c", &x); switch(x){
        default: return 0 * printf("자음\n");
        case 'a': case 'i': case 'u': case 'e': case 'o': printf("모음\n");
    }
}