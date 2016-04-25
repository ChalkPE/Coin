/**
 * @author ChalkPE <chalk@chalk.pe>
 * @since 2016-04-25
 */

#include <stdio.h>
int main(){
    double w; scanf("%lf", &w); // get a value

    // print a level
    if(w <= 50.80) printf("플라이급");
    else if(w <= 61.23) printf("라이트급");
    else if(w <= 72.57) printf("미들급");
    else if(w <= 88.45) printf("크루저급");
    else printf("헤비급");

    return 0;
}

// END OF FILE