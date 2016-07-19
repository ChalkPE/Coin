/**
 * @author ChalkPE <chalk@chalk.pe>
 * @since 2016-07-14
 */

#include <stdio.h>

#define xx for(x = 1; x <= 6; x++)
#define yy for(y = x; y <= 6; y++)
#define zz for(z = y; z <= 6; z++)

int main(){
    int n, x, y, z; scanf("%d", &n);
    switch(n){
        case 1: xx       printf("%d \n",       x);       break;
        case 2: xx yy    printf("%d %d \n",    x, y);    break;
        case 3: xx yy zz printf("%d %d %d \n", x, y, z); break;
        default: return 1;
    }
}