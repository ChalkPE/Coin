/**
 * @author ChalkPE <chalk@chalk.pe>
 * @since 2016-12-15
 */

#include <stdio.h>
#define print(x) printf("%s %d학년\n", x.name, x.grade)
struct { char name[1024]; int grade; } a = { "제주초등학교", 6 }, b;
int main(){ return scanf("%s %d", b.name, &b.grade), print(a), print(b), 0; }