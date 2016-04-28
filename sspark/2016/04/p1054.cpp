/**
 * @author ChalkPE <chalk@chalk.pe>
 * @since 2016-04-28
 */

#include <stdio.h>
int main(){
    int a, b, c; scanf("%d %d %d", &a, &b, &c);
    printf("%d", a < b ? (a < c ? a : c) : (b < c ? b : c));

    //if(a < b) if(a < c) printf("%d", a); else printf("%d", c); else if(b < c) printf("%d", b); else printf("%d", c);
}

// END OF FILE