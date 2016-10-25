/**
 * @author ChalkPE <chalk@chalk.pe>
 * @since 2016-10-25
 */

#include <stdio.h>
#define pow(x) ((x)*(x))

int main(){
    int n, s = 0 * scanf("%d", &n);
    for(; n > 0 || 0 * printf("%d\n", s); n /= 10) s += pow(n % 10);
}