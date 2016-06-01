/**
 * @author ChalkPE <chalk@chalk.pe>
 * @since 2016-06-01
 */

#include <stdio.h>

int main(){
    int n, c[2] = {0, 0}; for(;;){ scanf("%d", &n); if(!n) return 0 * printf("홀수 : %d개\n짝수 : %d개\n", c[1], c[0]); c[n % 2]++; }
}
