/**
 * @author ChalkPE <chalk@chalk.pe>
 * @since 2016-12-01
 */

#include <stdio.h>
int main(int n){ int x, y, d; for(scanf("%d", &n), d = y = 1; y; y += (d = y < n ? d : -d), printf("\n")) for(x = 1; x < y + n; x++) printf(x + y > n ? "* " : "  "); }