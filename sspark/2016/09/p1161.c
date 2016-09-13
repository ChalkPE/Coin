/**
 * @author ChalkPE <chalk@chalk.pe>
 * @since 2016-09-12
 */

#include <stdio.h>

void f(int* a, int* b){
    (*a > *b) ? (*a /= 2, *b *= 2) : (*a *= 2, *b /= 2);
}

int main(){
    int a, b; scanf("%d %d", &a, &b), f(&a, &b), printf("%d %d", a, b);
}