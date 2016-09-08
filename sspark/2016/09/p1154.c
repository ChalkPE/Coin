/**
 * @author ChalkPE <chalk@chalk.pe>
 * @since 2016-09-08
 */

#include <stdio.h>

int main(){
    int x, y, z, a[20];
    for(x = 0; x < 20; scanf("%d", a+ x++));
    for(y = 0; y < 19; y++) for(x = y + 1; x < 20; x++) if(a[y] < a[x]) z = a[y], a[y] = a[x], a[x] = z;
    for(x = 0; x < 5; printf("%d ", a[x++]));
}