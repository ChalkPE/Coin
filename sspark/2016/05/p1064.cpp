/**
 * @author ChalkPE <chalk@chalk.pe>
 * @since 2016-05-27
 */

#include <stdio.h>

int main(){
    int i = 1, n, sum = 0; scanf("%d", &n);
    while(i <= n) sum += i++; printf("%d", sum);
}
