#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* longestConsec(char* arr[], int n, int k) {
  int i, j, len, strl, max = 0;
  char *str = 0, *longest = 0;
  if(n == 0 || k > n || k <= 0) return "";

  for(i = 0; i + k <= n; i++){
    for(len = j = 0; j < k; j++) len += strlen(arr[i + j]);

    if(str) free(str); str = calloc(len + 1, sizeof(char));
    for(j = 0; j < k; j++) strcat(str, arr[i + j]);

    if((strl = strlen(str)) > max)
      max = strl, strcpy(longest = malloc(strl + 1), str);
  }

  return longest;
}

int main(){

  char* a1[] = {"zone", "abigail", "theta", "form", "libe", "zas", "theta", "abigail"};
  printf(longestConsec(a1, 8, 2));
}