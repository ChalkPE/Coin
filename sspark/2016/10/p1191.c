#include <stdio.h>

/**
 * @author ChalkPE <chalk@chalk.pe>
 * @since 2016-10-24
 */

int a[11], n, m;

void run(int l, int s){
    if(l <= n) for(a[l] = 1; a[l] <= 6; a[l]++) run(l + 1, s + a[l]);
    else if(s == m) for(l = 1; l <= n || 0 * printf("\n"); printf("%d ", a[l++]));
}

int main(){
    return scanf("%d %d", &n, &m), run(1, 0), 0;
}