/**
 * @author ChalkPE <chalk@chalk.pe>
 * @since 2016-07-14
 */

#include <stdio.h>

int main(){
    int n, i; scanf("%d", &n);
    for(i = 2; i <= n; i++) if(!(n % i)) printf("%d ", i), n /= i, i = 1;
}