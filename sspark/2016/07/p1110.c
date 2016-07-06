/**
 * @author ChalkPE <chalkpe@gmail.com>
 * @since 2016-07-04
 */

#include <stdio.h>

int f(int x){
    int k, y; for(k = y = 1; k <= x; y *= k++); return y;
}

int main(){
    int n, k, y; scanf("%d", &n);
    for(y = k = 0; k < n; y += f(++k));
    return 0 * printf("%d", y);
}