#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>
int main() {
  system("cls");
  printf("\nINPUT:\n");
  float a, b;
    scanf("%f", &a);
    scanf("%f", &b);
  printf("\nOUTPUT:\n");
  if(a == 0){
        printf("Error: Division by zero");
    } else {
        float x = cbrt(-b/a);
        printf("%.3f", x);
    }
  printf("\n");
  system ("pause");
  return(0);
}