/**
 * @author ChalkPE <chalk@chalk.pe>
 * @since 2016-05-20
 */

#include <stdio.h>

int main(){
    int x, y; for(x = 1; x <= 9; x++){
        for(y = 2; y <= 9; y++) printf("%1d * %1d = %2d\t\t", y, x, x * y);
        printf("\n");
    }
}