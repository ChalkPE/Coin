/**
 * @author ChalkPE <chalk@chalk.pe>
 * @since 2016-04-27
 */

#include <stdio.h>
int main(){
    char grade; scanf("%c", &grade);
    switch(grade){
        default: printf("잘못입력");
        break; case 'A': printf("매우잘함");
        break; case 'B': printf("잘함");
        break; case 'C': printf("보통임");
        break; case 'D': printf("노력요함");
        break; case 'F': printf("낙제");
    } return 0;
}

// END OF FILE