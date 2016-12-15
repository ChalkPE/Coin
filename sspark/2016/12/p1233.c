/**
 * @author ChalkPE <chalk@chalk.pe>
 * @since 2016-12-05
 */

#include <stdio.h>
#define read(p) scanf("%s %d %d", p.name, &p.x, &p.y)
#define write(p) printf("%s %d %d\n", p.name, p.x, p.y)

struct { char name[1024]; int x, y; } a, b;
int main(){
    read(a), read(b), write(a), write(b);
    printf("평균 %d %d\n", (a.x + b.x) / 2, (a.y + b.y) / 2);
}