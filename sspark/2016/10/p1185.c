/**
 * @author ChalkPE <chalk@chalk.pe>
 * @since 2016-10-10
 */

#include <stdio.h>

int f(int n){ return n + (n > 1 ? f(n - 1) : 0); }
int main(int n){ scanf("%d", &n), printf("%d\n", f(n)); }