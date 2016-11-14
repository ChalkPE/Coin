/**
 * @author ChalkPE <chalk@chalk.pe>
 * @since 2016-11-14
 */

#include <stdio.h>

int main(){
    int i, a[5];
    for(i = 0; i < 5; i++) scanf("%d", a + i);
    for(i = 0; i < 5; i += 2) printf("%d ", a[i]);
}