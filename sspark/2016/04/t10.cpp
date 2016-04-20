/**
 * @author ChalkPE <chalk@chalk.pe>
 * @since 2016-04-20
 */

#include <stdio.h>
int main(){
    int a, b, c; double average;
    scanf("%d %d %d", &a, &b, &c);
    average = (a + b + c) / 3.0;
    printf("Score: %.1lf", average);
    return 0;
}

//END OF FILE