/**
 * @author ChalkPE <chalk@chalk.pe>
 * @since 2016-07-06
 */

#include <stdio.h>

int main(){
    int n, k, y, f = 1; scanf("%d", &n);
    for(k = y = 0; k < n; y += (f *= ++k));
    return 0 * printf("%d", y);
}