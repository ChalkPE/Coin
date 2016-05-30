/**
 * @author ChalkPE <chalk@chalk.pe>
 * @since 2016-05-30
 */

#include <stdio.h>

int main(){
    int n; for(;;){
        scanf("%d", &n); if(n == -1) return 0;
        else if(!(n % 3)) printf("%d\n", n / 3);
    }
}
