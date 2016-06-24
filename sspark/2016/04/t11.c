/**
 * @author ChalkPE <chalk@chalk.pe>
 * @since 2016-04-21
 */

#include <stdio.h>
int main(){
    int a, b, c; double average;     //define values
    scanf("%d %d %d", &a, &b, &c);   //get values from user
    average = (a + b + c) / 3.0;     //calculate average
    printf("%.1lf점", average);      //print average to console
    return 0;
}

//END OF FILE