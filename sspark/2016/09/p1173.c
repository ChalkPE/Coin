/**
 * @author ChalkPE <chalk@chalk.pe>
 * @since 2016-09-29
 */

#include <stdio.h>
#define v(x) for(x = 1; x <= 3; x++)

int main(){
    int x, y; v(x) v(y) printf("%d + %d = %d\n", x, y, x + y);
}