/**
 * @author ChalkPE <chalk@chalk.pe>
 * @since 2016-11-24
 */

#include <stdio.h>

int main(){
    int a, b, s;
    scanf("%d%d", &a, &b), s = a - b, printf("%d\n", s > 0 ? s : -s);
}