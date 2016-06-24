/**
 * @author ChalkPE <chalk@chalk.pe>
 * @since 2016-04-27
 */

#include <stdio.h>
int main(){
    char sex; int age; scanf("%c %d", &sex, &age);

    if(sex == 'F') printf(age >= 18 ? "WOMAN" : "GIRL");
    else if(sex == 'M') printf(age >= 18 ? "MAN" : "BOY");

    return 0;
}

// END OF FILE