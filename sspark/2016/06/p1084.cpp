/**
 * @author ChalkPE <chalk@chalk.pe>
 * @since 2016-06-10
 */

#include <stdio.h>

int main(){
    int n, i, s = 0; for(scanf("%d", &n), i = 5; i <= n; i += 5) s += i; printf("%d\n", s);
}