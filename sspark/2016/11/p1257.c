/**
 * @author ChalkPE <chalk@chalk.pe>
 * @since 2016-11-28
 */

#include <stdio.h>
#include <string.h>

int main(){
    char a[101], b[101];
    gets(a), gets(b); if(strlen(a) < strlen(b)) puts(a), puts(b); else puts(b), puts(a);
}