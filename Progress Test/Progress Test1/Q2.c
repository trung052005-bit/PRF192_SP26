#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>
int main() {
  system("cls");
  printf("\nINPUT:\n");
 int x, y;
 scanf("%d", &x);
 scanf("%d", &y);
  printf("\nOUTPUT:\n");
   int sum = 0;
 for(int i = x; i <= y; i++){
     if(i % 2 != 0){
         sum += i;
     }
 }
 printf("%d", sum); 
  printf("\n");
  system ("pause");
  return(0);
}