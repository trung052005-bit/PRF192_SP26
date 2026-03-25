#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>
int main() {
  system("cls");
  printf("INPUT:\n");
  //INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
     int n, i;
  int a[100];
  scanf("%d", &n);
   for(i = 0; i < n; i++) {
      scanf("%d", &a[i]);
  }
  int maxEven, minEven;
  int posMax = -1, posMin = -1;

  for(i = 0; i < n; i++) {
      if(a[i] % 2 == 0) {
          if(posMax == -1) {
              maxEven = a[i];
              minEven = a[i];
              posMax = i;
              posMin = i;
          } else {
              if(a[i] > maxEven) {
                  maxEven = a[i];
                  posMax = i;
              }
              if(a[i] < minEven) {
                  minEven = a[i];
                  posMin = i;
              }
          }
      }
  }
  if(posMax != -1 && posMin != -1 && posMax != posMin) {
      int temp = a[posMax];
      a[posMax] = a[posMin];
      a[posMin] = temp;
  }
  // Fixed Do not edit anything here.
  printf("\nOUTPUT:\n");
  //@STUDENT: WRITE YOUR OUTPUT HERE:
for(i = 0; i < n; i++) {
      printf("%d ", a[i]);
  }
  //--FIXED PART - DO NOT EDIT ANY THINGS HERE
  printf("\n");
  system ("pause");
  return(0);
}
