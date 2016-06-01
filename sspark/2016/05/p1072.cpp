/**
 * @author ChalkPE <chalk@chalk.pe>
 * @since 2016-06-01
 */

#include <stdio.h>

int main(){
    int n, c = 0; for(;;) if(scanf("%d", &n), n) c += n % 3 && n % 5; else return 0 * printf("%d\n", c);
}
