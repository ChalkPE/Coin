/**
 * @author ChalkPE <chalk@chalk.pe>
 * @since 2016-07-14
 */

#include <stdio.h>

int main(){
    int stu[100000], n, m, i;
    int current = 0, max = 0;

    scanf("%d %d", &n, &m);

    for(i = 0; i < n; i++){
        scanf("%d", &stu[i]);
        current += stu[i];

        if(i >= m) current -= stu[i - m];
        if(max < current) max = current;
    }

    printf("%d", max);
}