/**
 * @author ChalkPE <chalk@chalk.pe>
 * @since 2016-11-01
 */

#include <stdio.h>
#include <ctype.h>

int main(char c){ while(scanf(" %c", &c), isalnum(c)) printf(isalpha(c) ? "%c\n" : "%d\n", c); }