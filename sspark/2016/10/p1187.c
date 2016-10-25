/**
 * @author ChalkPE <chalk@chalk.pe>
 * @since 2016-10-25
 */

#include <stdio.h>

int m[51]; int f(int n){ return m[n] ? m[n] : (m[n] = n > 1 ? f(n / 2) + f(n - 1) : n); }
int main(int n){ scanf("%d", &n); printf("%d\n", f(n)); }