/**
 * @author ChalkPE <chalk@chalk.pe>
 * @since 2016-04-14
 */

#include <stdio.h>
int main(){
    int a = 3;
    printf("%p \n", &a);
    printf("%d \n \n", *&a);

    printf("%d \n", 4 / 3);
    printf("%f \n", 4 / 3);
    printf("%f \n", (float) 4 / 3);
    printf("%f \n", 4 / 3.0);
    return 0;
}

//END OF FILE