/**
 * @author ChalkPE <chalk@chalk.pe>
 * @since 2016-12-05
 */

#include <stdio.h>
struct { int k, v; } a[6];
void m(int i){ for(i = 1; i <= 5; i++) if(a[i].v > a->v) a->k = i, a->v = a[i].v; }
int main(int i){ for(i = 1; i <= 5 || (m(0), printf("저축왕 %d번 %d\n", a->k, a->v), 0); i++) printf("%d번 저축금액은? ", i), scanf("%d %d", &a[i].k, &a[i].v); }