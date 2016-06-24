/**
 * @author ChalkPE <chalk@chalk.pe>
 * @since 2016-05-19
 */

#include <stdio.h>

int main(){
    int n; scanf("%d", &n); while(n > 0){
        printf(n % 2 ? "홀수\n" : "짝수\n");
        scanf("%d", &n);
    }
}