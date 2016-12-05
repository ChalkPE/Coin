/**
 * @author ChalkPE <chalk@chalk.pe>
 * @since 2016-12-05
 */

#include <stdio.h>

struct { char name[1024], school[1024]; int grade; } person;
int main(){ scanf("%s %s %d", person.name, person.school, &person.grade); printf("%s %d학년에 재학중인 %s입니다.", person.school, person.grade, person.name); }