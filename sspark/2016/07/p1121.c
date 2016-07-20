/**
 * @author ChalkPE <chalk@chalk.pe>
 * @since 2016-07-20
 */

#include <stdio.h>
#define min(a, b) a = a < b ? a : b

int main(){
    int a[12]; for(*a = 0, a[11] = 1000; *a < 10; min(a[11], a[*a])) scanf("%d", ++*a +a); return 0 * printf("%d", a[11]);
}
