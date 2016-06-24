/**
 * @author ChalkPE <chalk@chalk.pe>
 * @since 2016-04-28
 */

#include <stdio.h>
int main(){
    int a; scanf("%d", &a);
    printf("%s", a == 0 ? "zero" : a > 0 ? "plus" : "minus");
}

// END OF FILE