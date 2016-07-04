/**
 * @author ChalkPE <chalkpe@gmail.com>
 * @since 2016-07-04
 */

#include <stdio.h>
int main(){
    int x, y, n, m;
    for(scanf("%d", &n), m = y = 0; y < n; y++, printf("\n"))
    for(x = 0; x < n; x++, printf("%d ", m++ % 5 * 2 + 1));
}
