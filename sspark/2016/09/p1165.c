/**
 * @author ChalkPE <chalk@chalk.pe>
 * @since 2016-09-12
 */

#include <stdio.h>

void block(int n){
    int x, y;
    for(y = 1; y <= n; y++, printf("\n")) for(x = 1; x <= n; x++) printf("%d ", x * y);
}

int main(){
    int n; block((scanf("%d", &n), n));
}