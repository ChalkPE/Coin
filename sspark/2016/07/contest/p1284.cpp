/**
 * @author ChalkPE <chalk@chalk.pe>
 * @since 2016-07-14
 */

#include <stdio.h>
int main(){
    int n, x, y, z; scanf("%d", &n);
    switch(n){
        case 1:
            for(x = 1; x <= 6; x++) printf("%d\n", x);
            break;

        case 2:
            for(x = 1; x <= 6; x++) for(y = 1; y <= 6; y++) if(x <= y) printf("%d %d\n", x, y);
            break;

        case 3:
            for(x = 1; x <= 6; x++) for(y = 1; y <= 6; y++) for(z = 1; z <= 6; z++) if(x <= y && y <= z) printf("%d %d %d\n", x, y, z);
            break;

        default:
            return 1;
    }
}