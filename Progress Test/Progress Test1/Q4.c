#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>
int main() {
  system("cls");
  printf("\nINPUT:\n");
int n;
scanf("%d", &n);
  printf("\nOUTPUT:\n");
  for(int i = 1; i <= n; i++){
    printf("%d ", 3*i);
}
  printf("\n");
  system ("pause");
  return(0);
}