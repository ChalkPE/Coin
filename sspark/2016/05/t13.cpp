/**
 * @author ChalkPE <chalk@chalk.pe>
 * @since 2016-05-09
 */

#include <stdio.h>
#define P 15000

int main(){
    int m; printf("책의 가격은 %d원입니다.\n당신이 가진 용돈은 얼마인가요? ", P);
    scanf("%d", &m); if(m >= P) printf("책을 구입하였습니다. 이제 남은 용돈은 %d원입니다.", m - P);
}

// END OF FILE