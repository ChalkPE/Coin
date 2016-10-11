/**
 * @author ChalkPE <chalk@chalk.pe>
 * @since 2016-10-10
 */

#include <stdio.h>
#define d(x) for(x = 1; x <= 6; x++)
int main(int x, int y, int z){ d(x) d(y) d(z) printf("%d %d %d\n", x, y, z); }