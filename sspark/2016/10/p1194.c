/**
 * @author ChalkPE <chalk@chalk.pe>
 * @since 2016-10-28
 */

#include <stdio.h>

int f(int v, int m){ return v > 0 ? f(v / 10, m * (v % 10 ? v % 10 : 1)) : m; }
int main(int a, int b, int c){ scanf("%d%d%d", &a, &b, &c), printf("%d\n", f(a * b * c, 1)); }