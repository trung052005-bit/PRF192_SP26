#include <stdio.h>
void inputArr(int a[], int n){
    int i;
    for(i = 0; i < n; i++){
        printf("a[%d] = ", i);
        scanf("%d", &a[i]);
    }
}
void outputArr(int a[], int n){
    int i;
    for(i = 0; i < n; i++){
        printf("%d ", a[i]);
    }
}
int findMax(int a[], int n){
    int i;
    int max = a[0];
    for(i = 1; i < n; i++){
        if(a[i] > max)
            max = a[i];
    }
    return max;
}
int main(){
    int a[100];
    int n;
    printf("Nhap so phan tu n: ");
    scanf("%d", &n);
    inputArr(a, n);
    printf("Mang vua nhap: ");
    outputArr(a, n);
    printf("\nGia tri lon nhat: %d", findMax(a, n));
    return 0;
}