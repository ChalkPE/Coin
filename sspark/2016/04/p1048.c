/**
 * @author ChalkPE <chalk@chalk.pe>
 * @since 2016-04-25
 */

#include <stdio.h>
int main(){
    int age; scanf("%d", &age); // get a value

    // print a result
    if(age >= 20) printf("성인입니다.");
    else printf("당신은 %d년 후에 성인이 됩니다.", 20 - age);

    return 0;
}

// END OF FILE