/**
 * @author ChalkPE <chalkpe@gmail.com>
 * @since 2016-03-23
 */

#include <stdio.h>
int main(){
    int a, b, c;
    scanf("%d %d", &a, &b); //a(10) b(20) 입력
    c = a++ * --b; //a(10: 대입 후 증가) * b(19: 감소 후 대입) = c(190)
    printf("%d %d %d\n", a, b, c); //a(11) b(19) c(190) 출력
    return 0;
}

//END OF FILE