/**
 * @author ChalkPE <chalk@chalk.pe>
 * @since 2016-04-29
 */

#include <stdio.h>
int main(){
    int a, b, c; scanf("%d %d %d", &a, &b, &c);
    printf((a >= 40 && b >= 40 && c >= 40 && (a + b + c) / 3 >= 60) ? "합격" : "불합격");
}

// END OF FILE