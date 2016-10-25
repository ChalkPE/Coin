/**
 * @author ChalkPE <chalk@chalk.pe>
 * @since 2016-10-11
 */

#include <stdio.h>
char s[20];
void f(int n){ if(n > 0) f(--n), s[n] = '*', printf("%s\n", s); }
int main(int n){ scanf("%d", &n), f(n); }