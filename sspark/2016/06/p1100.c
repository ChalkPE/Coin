/**
 * @author ChalkPE <chalkpe@gmail.com>
 * @since 2016-06-27
 */

#include <stdio.h>
int main(){
    int n, i; for(scanf("%d", &n), i = n; i < 100; i += n) if(printf("%d ", i), !(i % 10)) return 0;
}

//END OF FILE