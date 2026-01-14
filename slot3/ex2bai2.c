#include <stdio.h>

int main() {
    char kt = 'A';   // khai báo và gán giá trị cho biến ký tự

    // In giá trị của biến
    printf("Gia tri ky tu: %c\n", kt);

    // In gia tri duoi dang so
    printf("Gia tri thap phan: %d\n", kt);
    printf("Gia tri hexa: %X\n", kt);
    printf("Gia tri octal: %o\n", kt);

    // In kich thuoc kieu du lieu
    printf("Kich thuoc cua bien kt: %lu byte\n", sizeof(kt));

    return 0;
}