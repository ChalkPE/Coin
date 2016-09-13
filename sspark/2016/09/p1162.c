/**
 * @author ChalkPE <chalk@chalk.pe>
 * @since 2016-09-13
 */

#include <stdio.h>

void f(int a, int b){
    int x, y; for(y = a; y <= b; y++, printf("\n")) for(printf("== %d단 ==\n", y), x = 1; x <= 9; x++, printf("\n")) printf("%d * %d = %2d", y, x, y * x);
}

int main(){
    int a, b; scanf("%d %d", &a, &b), f(a > b ? b : a, a > b ? a : b);
}