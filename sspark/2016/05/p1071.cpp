/**
 * @author ChalkPE <chalk@chalk.pe>
 * @since 2016-06-01
 */

#include <stdio.h>

int main(){
    int n, c = 0, s = 0; for(;;){
        scanf("%d", &n); if(0 <= n && n <= 100){ s += n; c++; continue; }
        return 0 * printf("합계 : %d점\n평균 : %.1lf점\n", s, s / (c + 0.0));
    }
}
