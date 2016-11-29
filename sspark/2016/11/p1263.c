/**
 * @author ChalkPE <chalk@chalk.pe>
 * @since 2016-11-29
 */

#include <stdio.h>

int f(int n){ return n ? n * f(n - 1) : 1; }
int main(){ int n; return scanf("%d", &n), printf("%d\n", f(n)), 0; }