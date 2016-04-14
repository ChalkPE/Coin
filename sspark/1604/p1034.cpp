/**
 * @author ChalkPE <chalkpe@gmail.com>
 * @since 2016-04-04
 */

#include <stdio.h>
int main(){
    int a, b, c; scanf("%d %d %d", &a, &b, &c);
    printf("%d %d", (a > b) && (a > c), (a == b) && (b == c));
    return 0;
}

//END OF FILE