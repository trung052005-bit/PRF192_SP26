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
  if(scanf("%d",&n)!=1 || n<=0){
      printf("OUTPUT:\n");
      printf("Invalid input\n");
      system("pause");
      return 0;
  }
  int a[1000];
  int even[1000];
  int i,j,count=0;

  for(i=0;i<n;i++){
      scanf("%d",&a[i]);
      if(a[i] % 2 == 0){
          even[count++] = a[i];
      }
  }
  // Fixed Do not edit anything here.
  printf("OUTPUT:\n");
    for(i=0;i<count-1;i++){
      for(j=i+1;j<count;j++){
          if(even[i] < even[j]){
              int temp = even[i];
              even[i] = even[j];
              even[j] = temp;
          }
      }
  }
  for(i=0;i<count;i++){
      printf("%d\n", even[i]);
  }
  //--FIXED PART - DO NOT EDIT ANY THINGS HERE  
  system ("pause");
  return(0);
}
