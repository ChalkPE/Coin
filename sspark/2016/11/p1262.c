/**
 * @author ChalkPE <chalk@chalk.pe>
 * @since 2016-11-29
 */

#include <stdio.h>

int main(){
    int a, b, o; char c; scanf("%d %d %c", &a, &b, &c);

    switch(c){
        case '+': o = a + b; break;
        case '-': o = a - b; break;
        case '*': o = a * b; break;
        case '/': o = a / b; break;
        case '%': o = a % b; break;
        default: return 0;
    }
    return 0 * printf("%d %c %d = %d", a, c, b, o);
}