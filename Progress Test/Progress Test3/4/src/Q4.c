#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>
// Hàm tìm số chẵn lớn nhất
int findLargestEvenNumber(int arr[], int n){
    int max = -1; // giả sử chưa có số chẵn
    for(int i = 0; i < n; i++){
        if(arr[i] % 2 == 0){ // kiểm tra số chẵn
            if(max == -1 || arr[i] > max){
                max = arr[i];
            }
        }
    }
    return max;
}
int main() {
  system("cls");
  printf("INPUT:\n");
  //INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
     int n;
    scanf("%d", &n);

    int arr[100];
    for(int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }
  // Fixed Do not edit anything here.
  printf("\nOUTPUT:\n");
  //@STUDENT: WRITE YOUR OUTPUT HERE:
     int result = findLargestEvenNumber(arr, n);
    if(result == -1){
        printf("There are no even numbers in n elements.");
    } else {
        printf("%d", result);
    }
  //--FIXED PART - DO NOT EDIT ANY THINGS HERE
  printf("\n");
  system ("pause");
  return(0);
}
