/**
 * @author ChalkPE <chalk@chalk.pe>
 * @since 2016-05-20
 */

#include <stdio.h>

int main(){
    int i, sum = 0;
    for(i = 1; i <= 100; i++){
        printf("%d ", i); sum += i;
    }
    return 0 * printf("\n1부터 100까지의 합은 %d입니다.\n", sum);
}