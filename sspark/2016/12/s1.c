/**
 * @author ChalkPE <chalk@chalk.pe>
 * @since 2016-12-20
 */

#include <stdio.h>
int i, j; struct { char k[512]; int x; double y; } t, a[5];

int main(){
    for(i = 0; i < 5; i++) scanf("%s %d %lf", a[i].k, &a[i].x, &a[i].y);
    for(i = 0; i < 5; i++) for(j = i + 1; j < 5; j++) if(a[i].x > a[j].x) t = a[i], a[i] = a[j], a[j] = t;
}