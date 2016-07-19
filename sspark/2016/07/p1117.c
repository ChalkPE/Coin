/**
 * @author ChalkPE <chalk@chalk.pe>
 * @since 2016-07-19
 */

#include <stdio.h>

int main(){
    int n, a[10];
    for(n = 0; n < 10; n++) a[n] = n + 1;
    for(n = 0; n < 10; n++) printf("%d ", a[n]);
}