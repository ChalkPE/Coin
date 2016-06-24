/**
 * @author ChalkPE <chalkpe@gmail.com>
 * @since 2016-03-26
 */

#include <stdio.h>

int main(){
    int i, n, memory[10];
    for(i = 0; i < 5; i++){
        scanf("%d", &n);
        memory[n - 1] = 1;
    }

    for(i = 0; i < 10; i++) if(memory[i] != 1) printf("%d ", i + 1);
    return 0;
}
