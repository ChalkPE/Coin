/**
 * @author ChalkPE <chalk@chalk.pe>
 * @since 2016-06-09
 */

#include <stdio.h>

int main(){
    int a, b, i; for(scanf("%d %d", &a, &b), i = (a < b ? a : b), b = (a > b ? a : b); i <= b; i++) printf("%d ", i);
}