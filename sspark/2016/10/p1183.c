/**
 * @author ChalkPE <chalk@chalk.pe>
 * @since 2016-10-07
 */

#include <stdio.h>

void r(int n){
    if(n < 1) return;
    printf("재귀함수\n"); r(n - 1);
}

int main(){
    int n; scanf("%d", &n); r(n);
}