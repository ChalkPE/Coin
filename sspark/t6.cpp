/**
 * @author ChalkPE <chalk@chalk.pe>
 * @since 2016-04-14
 */

#include <stdio.h>
int main(){
    int a = 3;
    printf("%p -> %d", &a, *&a);
    return 0;
}

//END OF FILE