/**
 * @author ChalkPE <chalk@chalk.pe>
 * @since 2016-05-25
 */

#include <stdio.h>
#define n 5

int main(){
    int x, y; for(y = 1; y <= n; y++){
        for(x = 1;     x <= y; x++) printf(". ");
        for(x = n - y; x >= 1; x--) printf("@ ");
        printf("\n");
    }
}
