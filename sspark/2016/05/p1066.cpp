/**
 * @author ChalkPE <chalk@chalk.pe>
 * @since 2016-05-30
 */

#include <stdio.h>

int main(){
    int i, n, sum = 0; for(i = 1; ; i++){
        scanf("%d", &n); sum += n;
        if(n >= 100) return 0 * printf("%d\n%.1lf", sum, (double) sum / i);
    }
}
