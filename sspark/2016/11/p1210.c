/**
 * @author ChalkPE <chalk@chalk.pe>
 * @since 2016-11-11
 */

#include <stdio.h>
#include <string.h>

int main(){
    int i = 0; char s[101], *token;
    fgets(s, sizeof s, stdin), token = strtok(s, " ");
    while(token) printf("%d. %s\n", ++i, token), token = strtok(NULL, " ");
}