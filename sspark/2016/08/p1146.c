/**
 * @author ChalkPE <chalk@chalk.pe>
 * @since 2016-08-30
 */

#include <stdio.h>
int main() {
    int t[3], v[5] = {0};
    for(*v = 0; *v < 4; ++*v, printf("%d반? ", *v), scanf("%d %d %d", t, t + 1, t + 2), v[*v] = t[0] + t[1] + t[2]);
    for(*v = 0; *v < 4; ++*v, printf("%d반 : %d개\n", *v, v[*v]));
}