/**
 * @author ChalkPE <chalkpe@gmail.com>
 * @since 2016-07-06
 */

#include <stdio.h>
int main(){ int n, a, b, c; for(scanf("%d", &n), a = 1; a <= n; a++) for(b = a + 1; b <= n; b++) for(c = b + 1; c <= n; c++) if(a * a + b * b == c * c) printf("%d %d %d\n", a, b, c); }