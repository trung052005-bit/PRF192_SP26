#include <stdio.h>

int main() {
    // 1. Khai báo và khởi tạo 2 số nguyên a, b
    int a = 7;
    int b = 2;

    // 2. Khai báo biến kq
    int kq;
    float kq_chia;

    // In giá trị a, b
    printf("a = %d\n", a);
    printf("b = %d\n", b);

    // Phép cộng
    kq = a + b;
    printf("%d + %d = %.0f\n", a, b, kq);

    // Phép trừ
    kq = a - b;
    printf("%d - %d = %.0f\n", a, b, kq);

    // Phép nhân
    kq = a * b;
    printf("%d * %d = %.0f\n", a, b, kq);

    // Phép chia (ra số thực)
    kq_chia = (float)a / b;
    printf("%d / %d = %.2f\n", a, b, kq_chia);

    return 0;
}
