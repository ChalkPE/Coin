/**
 * @author ChalkPE <chalk@chalk.pe>
 * @since 2016-07-18
 */

#include <stdio.h>

int main(){
    int i; int a[26];
    for(i = 0; i < 26; i++) a[i] = 'A' + i;
    for(i = 0; i < 26; printf("%c", a[i++]));
}