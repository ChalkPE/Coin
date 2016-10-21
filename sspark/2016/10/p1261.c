/**
 * @author ChalkPE <chalk@chalk.pe>
 * @since 2016-10-21
 */

#include <stdio.h>
int main(){
    int a[4];

    //FILE *in = fopen("input.txt", "r"), *out = fopen("output.txt", "w");
    /*f*/scanf(/*in,*/ "%d %d %d", a + 1, a + 2, a + 3);

    *a = a[1] + a[2] + a[3];
    /*f*/printf(/*out,*/ "%d %d...%d", *a, *a / 3, *a % 3);

    //fclose(in), fclose(out);
    return 0;
}