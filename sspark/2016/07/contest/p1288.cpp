/**
 * @author ChalkPE <chalk@chalk.pe>
 * @since 2016-07-06
 */

#include <stdio.h>
#include <time.h>

int main(){
    struct tm t  = { 0 };
    int yyyy, mm, dd, days;
    scanf("%d %d %d %d", &yyyy, &mm, &dd, &days);

    t.tm_year = yyyy - 1900, t.tm_mon = mm - 1, t.tm_mday = dd - days;

    mktime(&t);
    printf("%d %d %d", t.tm_year + 1900, t.tm_mon + 1, t.tm_mday);
}