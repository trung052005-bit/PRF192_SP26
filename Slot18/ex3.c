#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>
struct Book {
    int id;
    char name[100];
    float price;
};
int main() {
  system("cls");
  printf("INPUT:\n");	
  //INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
  int n;
    scanf("%d", &n);
    if (n <= 0) {
        printf("\nOUTPUT:\n");
        printf("Not Found");
        return 0;
    }
    struct Book *ds = (struct Book*)malloc(n * sizeof(struct Book));
     for (int i = 0; i < n; i++) {
        printf("\nSach %d:\n", i + 1);
        printf("Nhap id: ");
        scanf("%d", &(ds + i)->id);
        printf("Nhap name: ");
        scanf(" %[^\n]", (ds + i)->name);
        printf("Nhap price: ");
        scanf("%f", &(ds + i)->price);
    }
  // Fixed Do not edit anything here.
  printf("\nOUTPUT:\n");
  //@STUDENT: WRITE YOUR OUTPUT HERE:
  struct Book *max = ds;
    for (int i = 1; i < n; i++) {
        if ((ds + i)->price > max->price) {
            max = (ds + i);
        }
    }
     printf("\nOUTPUT:\n");
    printf("Sach co gia lon nhat:\n");
    printf("%d %s %.2f\n", max->id, max->name, max->price);
    printf("ID: %d\n", max->id);
  //--FIXED PART - DO NOT EDIT ANY THINGS HERE
  printf("\n");
  system ("pause");
  return(0);
}