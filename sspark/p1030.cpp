/**
 * @author ChalkPE <chalkpe@gmail.com>
 * @since 2016-03-23
 */

#include <stdio.h>
int main(){
    int a, b, c; scanf("%d %d", &a, &b);
    c = a++ * --b;
    printf("%d %d %d\n", a, b, c);
    return 0;
}

//END OF FILE