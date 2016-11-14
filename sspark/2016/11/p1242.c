/**
 * @author ChalkPE <chalk@chalk.pe>
 * @since 2016-11-14
 */

#include <stdio.h>

int main(){
    int a, *aa = &a;
    scanf("%d", aa);
    printf("%#p %d", aa, *aa);
}