#include <stdio.h>

int main(){
    // Khai báo và khởi tạo biến số thực a, b
    float a = 5.0;
    float b = 10.216;

    // Khai báo biến kq để lưu kết quả cộng
    float kq = a + b;

    // In giá trị của a và b
    printf("a = %.0f\n", a);
    printf("b = %.3f\n", b);

    // In kết quả phép cộng
    printf("%.0f + %.3f = %.2f\n", a, b, kq);

    return 0;
}