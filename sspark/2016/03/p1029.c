/**
 * @author ChalkPE <chalkpe@gmail.com>
 * @since 2016-03-23
 */

#include <stdio.h>
int main(){
    int a; scanf("%d", &a);
    printf("후치 %d\n", a++);
    printf("전치 %d\n", ++a);
    return 0;
}