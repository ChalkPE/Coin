/**
 * @author ChalkPE <chalkpe@gmail.com>
 * @since 2016-03-14
 */

#include <stdio.h>

void print(int a, int b){
    printf("%d - %d = %d\n", a, b, a - b);
}

int main(){
    print(55, 10);
    print(2008, 1999);
    return 0;
}