/**
 * @author ChalkPE <chalkpe@gmail.com>
 * @since 2016-07-06
 */

#include <stdio.h>
int main() { int n, m; while(scanf("%d %d", &n, &m), n || m) printf("%d %d %d %d \n", n + m, n < m ? m - n : n - m, n * m, n / m); }