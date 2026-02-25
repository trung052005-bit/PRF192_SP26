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
   double sum = 0;
 long long factorial = 1;
 for(int i = 1; i <= n; i++){
     factorial *= i;
     sum += 1.0 / factorial;
 }
 printf("%.3lf", sum);
  printf("\n");
  system ("pause");
  return(0);
}