#include <stdio.h>
int main() {
    int n;
    int i;
    int laSoChinhPhuong = 0;
    printf("Nhap mot so: ");
    scanf("%d", &n);
    if (n < 0) {
        printf("Khong phai so chinh phuong");
        return 0;
    }
    for (i = 0; i * i <= n; i++) {
        if (i * i == n) {
            laSoChinhPhuong = 1;
            break;
        }
    }
    if (laSoChinhPhuong == 1) {
        printf("La so chinh phuong");
    } else {
        printf("Khong phai so chinh phuong");
    }
    return 0;
}
