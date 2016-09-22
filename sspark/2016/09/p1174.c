/**
 * @author ChalkPE <chalk@chalk.pe>
 * @since 2016-09-22
 */

#include <stdio.h>

void write(int a[]){
    int k; for(k = 0; k < 10 || 0 * printf("\n"); printf("%d ", a[k++]));
}

int main(){
    int i, j, k, a[10]; for(i = 0; i < 10; scanf("%d", a+ i++));
    for(i = 9; i > 0; i--, write(a)) for(j = 0; j < i; j++) if(a[j] < a[j + 1]) k = a[j], a[j] = a[j + 1], a[j + 1] = k;
}