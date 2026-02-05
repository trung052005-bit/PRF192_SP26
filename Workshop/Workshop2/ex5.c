#include <stdio.h>
int main() {
    int n;
    int sum = 0;
    printf("Nhap cac so nguyen duong (nhap 0 de dung):\n");
    while (1) {
        printf("Nhap so: ");
        scanf("%d", &n);

        if (n == 0) {
            break;              
        }
        if (n > 0) {
            sum += n;          
        }
    }
    printf("Tong cac so nguyen duong da nhap la: %d", sum);
    return 0;
}
