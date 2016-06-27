/**
 * @author ChalkPE <chalkpe@gmail.com>
 * @since 2016-06-27
 */

#include <stdio.h>
int main(){
    int n, i, sum = 0;
    for(i = 0; i < 20; i++) if(!(scanf("%d", &n), sum += n, n)) break;
    return 0 * printf("%d %d", sum, sum / i);
}

//END OF FILE