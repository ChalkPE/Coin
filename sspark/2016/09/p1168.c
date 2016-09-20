/**
 * @author ChalkPE <chalk@chalk.pe>
 * @since 2016-09-20
 */

#include <stdio.h>

void read(int a[]){
    int i; for(i = 0; i < *a; scanf("%d", ++i +a));
}

void write(int a[]){
    int i; for(i = 0; i < *a; printf("%d ", a[++i]));
}

void sort(int a[]){
    int i, j, k; for(i = 1; i < *a; i++) for(j = i + 1; j <= *a; j++) if(a[i] < a[j]) k = a[i], a[i] = a[j], a[j] = k;
}

int main(){
    int a[11]; scanf("%d", a), read(a), sort(a), write(a);
}