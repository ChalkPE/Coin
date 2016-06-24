/**
 * @author ChalkPE <chalk@chalk.pe>
 * @since 2016-04-25
 */

#include <stdio.h>
int main(){
    double a, b; scanf("%lf %lf", &a, &b); // get values

    // print a grade
    if(a >= 4.0 && b >= 4.0) printf("A");
    else if(a >= 3.0 && b >= 3.0) printf("B");
    else printf("C");

    return 0;
}

// END OF FILE