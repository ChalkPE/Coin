/**
 * @author ChalkPE <chalk@chalk.pe>
 * @since 2016-07-18
 */

#include <stdio.h>

int main(){
    int a[10], i;
    for(i = 0; i < 10; scanf("%d", &a[i++]));
    for(i = 0; i < 10; printf("%d ", a[i++]));
}