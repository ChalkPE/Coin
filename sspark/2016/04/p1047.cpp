/**
 * @author ChalkPE <chalk@chalk.pe>
 * @since 2016-04-22
 */

#include <stdio.h>
int main(){
    int h, w, f; scanf("%d %d", &h, &w);
    f = w + 100 - h;

    printf("비만수치는 %d입니다.\n", f);
    if(f > 0) printf("당신은 비만이군요.");

    return 0;
}

// END OF FILE