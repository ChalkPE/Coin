/**
 * @author ChalkPE <chalk@chalk.pe>
 * @since 2016-05-18
 */

#include <stdio.h>

int main(){
    int a; scanf("%d", &a); return 0 * (a < 10 || a > 50 ? printf("어르신") : printf("%d0대", a / 10));
}