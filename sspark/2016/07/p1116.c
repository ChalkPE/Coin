/**
 * @author ChalkPE <chalk@chalk.pe>
 * @since 2016-07-19
 */

#include <stdio.h>

int main(){
    char c[10], i; for(i = 0; i < 10; i++) scanf(" %c", c + i);
    for(i = 0; i < 10; i++) printf("%c", c[i]); return 0;
}