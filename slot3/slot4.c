#include <stdio.h>

int main() {
    int day, month, year;
    // Đọc định dạng dd/mm/yyyy (ví dụ: 12/1/2025)
    if (scanf("%d/%d/%d", &day, &month, &year) != 3) {
        return 1; // lỗi nhập
    }

    // In ra với tháng/ ngày có 2 chữ số
    printf("%02d/%02d/%d\n", day, month, year);
    return 0;
}

