/**
 * @author ChalkPE <chalkpe@gmail.com>
 * @since 2016-03-18
 */

#include <stdio.h>
int main(){
    printf("섭씨 %5.1lf도는 화씨 %5.1lf도이다.\n화씨 %5.1lf도는 섭씨 %5.1lf도이다.",
           21.6,  (21.6 * 1.8) + 32,
           110.3, (110.3 - 32) * 0.55
    );
    return 0;
}