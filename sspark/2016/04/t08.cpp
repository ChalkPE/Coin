/**
 * @author ChalkPE <chalk@chalk.pe>
 * @since 2016-04-20
 */

#include <stdio.h>
int main(){
    int   a = 365;  printf("%5d\t",   a);
    float b = 3.14; printf("%3.1f\n", b);

    a = 1;
    printf("         1 + 1 = 2\n");
    printf(      " %9d + 1 = 2\n", a);
    printf(   "\t %.0f + 1 = 2\n", 1.23);

    return 0;
}

//END OF FILE