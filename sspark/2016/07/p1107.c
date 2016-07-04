/**
 * @author ChalkPE <chalkpe@gmail.com>
 * @since 2016-07-04
 */

#include <stdio.h>
#define f(n, a, b) for(y = 0; y < n; y++, printf("\n")) for(x = n; x > 0; printf(x-- + y < n ? a : b));
int main(){ int x, y, n; scanf("%d", &n); f(n, "  ", "# "); f(n, "# ", "  "); }
