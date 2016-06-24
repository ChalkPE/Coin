/**
 * @author ChalkPE <chalkpe@gmail.com>
 * @since 2016-04-07
 */

#include <stdio.h>
int main(){
    int a = 3; a = a + 3; a = a - 3;
    a = a * 3; a = a / 3; a = a % 3;

    printf("%d \n \n", a);

    int x = 3, y = 2;

    printf("%d %d \n", x == y, x != y);
    printf("%d %d \n", x > y, x <= y);
    printf("%d \n", (x > y) && (x <= y));
    printf("%d \n", (x > y) || (x <= y));
    printf("%d \n \n", !(x > y));

    printf("%d %d \n", 3 & 1, 3 | 1);
    printf("%d \n", 3 ^ 1);
    printf("%d %d \n", 3 << 1, 3 >> 1);
    printf("%d \n", ~3);

    return 0;
}

//END OF FILE