/**
 * @author ChalkPE <chalk@chalk.pe>
 * @since 2016-06-08
 */

#include <stdio.h>

int main(){
    int i, n, s3 = 0, s5 = 0;
    for(i = 0; i < 10; i++) scanf("%d", &n), s3 += !(n % 3), s5 += !(n % 5);
    return 0 * printf("3의 배수 : %d개\n5의 배수 : %d개\n", s3, s5);
}