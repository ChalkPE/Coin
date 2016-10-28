/**
 * @author ChalkPE <chalk@chalk.pe>
 * @since 2016-10-27
 */

#include <stdio.h>
void f(int n){ if(n) f(n / 2), printf("%d ", n); }
int main(int n){ scanf("%d", &n), f(n), printf("\n"); }