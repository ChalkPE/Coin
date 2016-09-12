/**
 * @author ChalkPE <chalk@chalk.pe>
 * @since 2016-09-12
 */

#include <stdio.h>

int f(int a, int b){
    return (a *= a) > (b *= b) ? (a - b) : (b - a);
}

int main(){
    int a, b; scanf("%d %d", &a, &b), printf("%d", f(a, b));
}