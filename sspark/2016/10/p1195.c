/**
 * @author ChalkPE <chalk@chalk.pe>
 * @since 2016-10-31
 */
#include <stdio.h>

int main(int n){ for(;;){
    printf("아스키 코드 =? "), scanf("%d", &n);
    if(n < 33 || 127 < n) return 0; printf("%c\n", n);
}}