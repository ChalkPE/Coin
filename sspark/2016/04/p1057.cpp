/**
 * @author ChalkPE <chalk@chalk.pe>
 * @since 2016-04-28
 */

#include <stdio.h>
int main(){
    int year; scanf("%d", &year);
    printf((year % 400 == 0 || (year % 4 == 0 && year % 100 > 0)) ? "윤년" : "평년");
}

// END OF FILE