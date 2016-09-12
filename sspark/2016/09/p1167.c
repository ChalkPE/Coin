/**
* @author ChalkPE <chalk@chalk.pe>
* @since 2016-09-12
*/

#include <stdio.h>

int f(int a, char o, int b){
    switch(o){
        case '+': return a + b;
        case '-': return a - b;
        case '*': return a * b;
        case '/': return a / b;
        default:  return 0;
    }
}

int main(){
    int a, b; char o;

    scanf("%d %c %d", &a, &o, &b);
    printf("%d %c %d = %d", a, o, b, f(a, o, b));
}