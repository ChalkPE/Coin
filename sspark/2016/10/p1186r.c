/**
 * @author ChalkPE <chalk@chalk.pe>
 * @since 2016-10-10
 */

#include <stdio.h>
int a[4]; void d(int n, int i){
    if(n <= 3) for(; i <= 6; ++i) a[n] = i, d(n + 1, 1);
    else for(; i <= 3 || 0 * printf("\n"); i++) printf("%d ", a[i]);
} int main(){ d(1, 1); }