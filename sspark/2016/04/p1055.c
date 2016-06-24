/**
 * @author ChalkPE <chalk@chalk.pe>
 * @since 2016-04-28
 */

#include <stdio.h>
int main(){
    int a, b; scanf("%d %d", &a, &b);
    printf("%d", (a -= b) < 0 ? -a : a);
}

// END OF FILE