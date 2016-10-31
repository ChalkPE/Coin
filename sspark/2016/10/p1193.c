/**
 * @author ChalkPE <chalk@chalk.pe>
 * @since 2016-10-28
 */

#include <stdio.h>

int f(int n, int i){ return n > 1 ? f(n / (n % 2 + 2), ++i) : i; }
int main(int n){ return scanf("%d", &n), printf("%d\n", f(n, 0)), 0; }