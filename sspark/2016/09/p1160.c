/**
 * @author ChalkPE <chalk@chalk.pe>
 * @since 2016-09-12
 */

#include <stdio.h>

int f(int a, char o, int b){
    if(o == '+') return a + b; if(o == '-') return a - b;
    if(o == '*') return a * b; if(o == '/') return a / b; return 0;
}

int main(){
    int a, b; char o; scanf("%d %c %d", &a, &o, &b), printf("%d %c %d = %d", a, o, b, f(a, o, b));
}