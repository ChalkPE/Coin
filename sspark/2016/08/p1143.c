/**
 * @author ChalkPE <chalk@chalk.pe>
 * @since 2016-08-29
 */

#include <stdio.h>
int main(){
    int v, a[11] = {0};
    while(scanf("%d", &v), v) a[v / 10]++;
    for(v = 10; v >= 0; v--) if(a[v]) printf("%d점 이상 : %d명\n", v * 10, a[v]);
}