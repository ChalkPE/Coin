/**
 * @author ChalkPE <chalkpe@gmail.com>
 * @since 2016-03-30
 */

#include <stdio.h>
int main(){
    int pi = 3.14;
    printf("%d; %d\n", pi, 3.14);

    char ch = 'A';
    printf("%c; %c; %c;\n", ch, ch + 32, 66);

    int a = 80, b = 83, c = 70, sum = a + b + c;
    printf("합 = %d\n평균 = %5.2lf\n", sum, sum / 3.0);

    const int N = 100;
    //N = -1; //error: assignment of read-only variable ‘N’

    char m1 = '?', m2 = '!';
    printf("%c %c\n", m1, m2);

    return 0;
}

//END OF FILE