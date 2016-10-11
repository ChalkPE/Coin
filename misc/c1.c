/**
 * @author ChalkPE <chalkpe@gmail.com>
 * @since 2016-10-07
 */

#include <stdio.h>

char encrypt(char c, int key){
    if(c < 'A' || 'Z' < c) return c;
    else return (char) ('A' + (c - 'A' + key) % 26);
}

char decrypt(char c, int key){
    if(c < 'A' || 'Z' < c) return c;
    else return (char) ('A' + (c - 'A' + 26 - key) % 26);
}

int main(){
    int key, i, m;
    char text[2048];

    while(1){
        printf("> Decrypt(0), Encrypt(1), Exit(*): ");
        scanf("%d", &m);

        if(m < 0 || 1 < m) break;

        printf("> %stext: ", m ? "Plain" : "Cipher");
        scanf(" %[^\n]s", text);

        printf("\n");
        for(key = 0; key < 26; key++, printf("\n")){
            printf("%2d - ", key);

            for(i = 0; text[i]; i++)
                printf("%c", m ? encrypt(text[i], key) : decrypt(text[i], key));
        }
        printf("\n");
    }
}