#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>
int main() {
  system("cls");
  printf("INPUT:\n");
  //INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
int n;
  scanf("%d", &n);
  int a[1000];
  int i, j;
  for(i = 0; i < n; i++){
      scanf("%d", &a[i]);
  }
  // Fixed Do not edit anything here.
  printf("OUTPUT:\n");
   int found = 0;
  for(i = 0; i < n; i++){
      if(a[i] % 2 == 0){ // số chẵn
          int printed = 0;
          // kiểm tra đã in chưa
          for(j = 0; j < i; j++){
              if(a[j] == a[i]){
                  printed = 1;
                  break;
              }
          }
          if(!printed){
              int count = 0;
              for(j = 0; j < n; j++){
                  if(a[j] == a[i]){
                      count++;
                  }
              }
              printf("%d-%d\n", count, a[i]);
              found = 1;
          }
      }
  }
  if(!found){
      printf("Not found\n");
  }
  //--FIXED PART - DO NOT EDIT ANY THINGS HERE  
  system ("pause");
  return(0);
}
