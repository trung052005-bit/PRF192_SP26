#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>
// Function to check if a number is prime
int isPrime(int n) {
    int i;
    if(n <= 1)
        return 0;
    for(i = 2; i <= sqrt(n); i++){
        if(n % i == 0)
            return 0;
    }
    return 1;
}
// Function to display prime numbers in array
void displayPrimes(int arr[], int size){
    int i;
    int found = 0;
    for(i = 0; i < size; i++){
        if(isPrime(arr[i])){
            printf("%d ", arr[i]);
            found = 1;
        }
    }
    if(found == 0){
        printf("Not found");
    }
}
int main() {
  system("cls");
  // Fixed Do not edit anything here.
  printf("INPUT:\n");
  //@STUDENT:ADD YOUR CODE FOR INPUT HERE:
  int n, i;
  int a[100];
  scanf("%d", &n);
  for(i = 0; i < n; i++){
      scanf("%d", &a[i]);
  }
  // Fixed Do not edit anything here.
  printf("\nOUTPUT:\n");
  //@STUDENT: WRITE YOUR OUTPUT HERE:
  displayPrimes(a, n);
  //--FIXED PART - DO NOT EDIT ANY THINGS HERE
  printf("\n");
  system ("pause");
  return(0);
}