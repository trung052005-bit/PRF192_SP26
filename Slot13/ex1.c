#include <stdio.h>
#include <stdlib.h>
#define MAX 100
void inputArray(int arr[], int *n) {
    int value;
    *n = 0;
    printf("Nhap cac so nguyen (nhap 0 de dung):\n");
    while (*n < MAX) {
        printf("Phan tu [%d]: ", *n);
        scanf("%d", &value);
        if (value == 0) {
            break;  
        }
        arr[*n] = value;
        (*n)++;  
    }
}
void printArray(int arr[], int n) {
    printf("Cac phan tu trong mang:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}
int findMax(int arr[], int n) {
    int max = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    return max;
}
void printEven(int arr[], int n) {
    printf("Cac so chan trong mang:\n");
    for (int i = 0; i < n; i++) {
        if (arr[i] % 2 == 0) {
            printf("%d ", arr[i]);
        }
    }
    printf("\n");
}
int main() {
    int arr[MAX];  
    int n = 0;
    inputArray(arr, &n);
    if (n == 0) {
        printf("Mang khong co phan tu nao!\n");
        return 0;
    }
    printArray(arr, n);
    printf("Gia tri lon nhat: %d\n", findMax(arr, n));
    printEven(arr, n);
    return 0;
}