/**
 * @author ChalkPE <chalkpe@gmail.com>
 * @since 2016-04-11
 */

#include <stdio.h>
int main(){
    printf("%d %d \n", 3 & 1, 3 | 1);
    printf("%d \n", 3 ^ 1);
    printf("%d %d \n", 3 << 1, 3 >> 1);
    printf("%d \n", 1 << 32 - 1);
    return 0;

    /* ---------------- *
     |   0000 0010 = +2 |
     |   1111 1110 = -2 |
     | 1 0000 0000 =  0 |
     |   0000 0011 = +3 |
     | 1 0000 0001 = +1 |
     * ---------------- */
}

//END OF FILE