/**
 * @author ChalkPE <chalk@chalk.pe>
 * @since 2016-09-29
 */

#include <stdio.h>

#define f(a, b) a, b, (a - b) * (a - b)
#define g(a, b) a, b, (a + b) * (a + b) * (a + b)

int main(){
    int x, y; scanf("%d %d", &x, &y);
    printf("(%d - %d) ^ 2 = %d\n(%d + %d) ^ 3 = %d\n", f(x, y), g(x, y));
}