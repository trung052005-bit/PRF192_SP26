#include <stdio.h>
int main() {
    int n;
    int soDao = 0;
    printf("Nhap so nguyen n: ");
    scanf("%d", &n);
    while (n != 0) {
        soDao = soDao * 10 + n % 10;
        n = n / 10;
    }
    printf("So dao nguoc cua n la: %d", soDao);
    return 0;
}
