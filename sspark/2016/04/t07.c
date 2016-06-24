/**
 * @author ChalkPE <chalk@chalk.pe>
 * @since 2016-04-18
 */

#include <stdio.h>
int main(){
    printf("\n");
    printf("Hello, world! 1\n");
    printf("Hello, world! %d\n", 2);

    printf("\n");
    printf("abcdefg\aaaa\n");
    printf("abcdefg\baaa\n");
    printf("abcdefg\raaa\n");
    printf("abcdefg\taaa\n");
    printf("abcde\taaa\n");
    printf("abcdefg\\aaa\n");

    printf("\n");
    printf("%i\n", -1024);
    printf("%o\n",  1024);
    printf("%o\n", -1024);
    printf("%u\n", -1024);
    printf("%e\n",  1024.12);
    printf("%g\n",  1024.12);
    printf("%g\n",  1024000000000.12);

    return 0;
}

//END OF FILE