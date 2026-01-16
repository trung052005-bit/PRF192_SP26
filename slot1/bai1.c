#include <stdio.h>

int main() {
    int a, b;
    char pt;

    // Nhập hai số nguyên
    printf("Nhap a, b: ");
    scanf("%d %d", &a, &b);

    // Nhập phép toán (dùng char)
    printf("Nhap phep toan (+, -, *, /): ");
    scanf(" %c", &pt); // thêm khoảng trắng để bỏ ký tự Enter

    if (pt == '+') {
        printf("%d + %d = %d\n", a, b, a + b);
    } else if (pt == '-') {
        printf("%d - %d = %d\n", a, b, a - b);
    } else if (pt == '*') {
        printf("%d * %d = %d\n", a, b, a * b);
    } else if (pt == '/') {
        if (b == 0) {
            printf("Khong the chia cho 0\n");
        } else {
            printf("%d / %d = %.2f\n", a, b, (double)a / b);
        }
    } else {
        printf("Phep toan khong hop le\n");
    }

    return 0;
}

