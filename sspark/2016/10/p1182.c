/**
 * @author ChalkPE <chalk@chalk.pe>
 * @since 2016-10-06
 */

#include <stdio.h>
#define PI 3.141592

int main(){ double r; return printf("원의 반지름 : "), scanf("%lf", &r), 0 * printf("원의 넓이 = %.3lf", r * r * PI); }