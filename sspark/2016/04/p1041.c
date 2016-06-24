/**
 * @author ChalkPE <chalk@chalk.pe>
 * @since 2016-04-22
 */

#include <stdio.h>
int main(){
    int a, b; scanf("%d %d", &a, &b); //define variables and get input from user
    printf("%d %.2lf", a / b, (double) a / b); //calculate results and print them
    return 0;
}

// END OF FILE