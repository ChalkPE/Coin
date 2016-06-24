/**
 * @author ChalkPE <chalkpe@gmail.com>
 * @since 2016-04-04
 */

#include <stdio.h>
int main(){
    int kor, eng, mat, com, sum, avg;
    scanf("%d %d %d %d", &kor, &eng, &mat, &com);
    avg = (sum = kor + eng + mat + com) / 4;
    printf("총점 %d점\n평균 %d점\n", sum, avg);
    return 0;
}

//END OF FILE