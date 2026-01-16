#include <stdio.h>

int main() {
    int a, b;
    char pt;
    float kq;

    printf("Nhap a, b: ");
    scanf("%d %d", &a, &b);

    printf("Nhap phep toan: ");
    fflush(stdin);
    scanf("%c", &pt);

    if (pt == '/' && b == 0) {
        printf("Khong the chia cho 0");
    } else {
        kq = (float)a / b;
        printf("Ket qua: %d %c %d = %.2f", a, pt, b, kq);
    }

    return 0;
}
