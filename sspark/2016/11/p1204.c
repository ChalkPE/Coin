/**
 * @author ChalkPE <chalk@chalk.pe>
 * @since 2016-11-10
 */

#include <stdio.h>
int main(char a, char b){ return scanf("%c %c", &a, &b), printf("%d %d\n", a + b, a > b ? a - b : b - a), 0; }