/**
 * @author ChalkPE <chalk@chalk.pe>
 * @since 2016-09-23
 */

#include <stdio.h>
int main(){
    int mm, dd, count[13] = { 0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
    scanf("%d %d", &mm, &dd), printf("%s!", (1 <= mm && mm <= 12 && 1 <= dd && dd <= count[mm]) ? "OK" : "BAD");
}