/**
 * @author ChalkPE <chalk@chalk.pe>
 * @since 2016-05-19
 */

#include <stdio.h>

int main(){
    int n; do{
        scanf("%d", &n);
        if(n > 0) printf(n % 2 ? "홀수\n" : "짝수\n");
    }while(n > 0);
}