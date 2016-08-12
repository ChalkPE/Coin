/**
 * @author ChalkPE <chalk@chalk.pe>
 * @since 2016-08-12
 */

#include <stdio.h>
int main(){
    int i; char c[10];
    for(i = 0; i < 10; scanf(" %c", c + i++));
    for(i = 9; i >= 0; printf("%c ", c[i--]));
}
