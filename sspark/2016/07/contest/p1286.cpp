/**
 * @author ChalkPE <chalk@chalk.pe>
 * @since 2016-07-14
 */

#include <stdio.h>

#define entire for(x = 0; x < n; x++) printf("*"); printf("\n");
#define border for(x = 0; x <= m - y; x++) printf("*");
#define center for(x = 1; x <= y * 2 - 1; x++) printf(" ");

#define increase for(y = 1; y <= m; y++, printf("\n"))
#define decrease for(y = m - 1; y >= 1; y--, printf("\n"))

int main() {
    int n, m, y, x; scanf("%d", &n); m = (n - 1) / 2;
    entire increase { border center border } decrease { border center border } entire
}