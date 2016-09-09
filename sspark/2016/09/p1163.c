/**
 * @author ChalkPE <chalk@chalk.pe>
 * @since 2016-09-09
 */

#include <stdio.h>

void print(char* v){
    printf("%s 번째\n@@@@@@@@@@\n", v);
}

int main(){
    print("첫"); print("두"); print("세");
}