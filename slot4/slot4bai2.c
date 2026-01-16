#include <stdio.h>

int main() {
    double num;
    printf("Nhap so thuc: ");
    scanf("%lf", &num);

    // Phần nguyên (dùng double thay vì int)
    double phanNguyen = (int)num;   // ép kiểu để lấy phần nguyên, nhưng vẫn lưu vào double

    // Phần thập phân
    double phanThap = num - (int)num;

    printf("Gia tri da nhap: %lf\n", num);
    printf("Phan nguyen la: %lf\n", phanNguyen);
    printf("Phan thap la: %lf\n", phanThap);

    return 0;
}

