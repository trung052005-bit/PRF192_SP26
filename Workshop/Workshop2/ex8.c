#include <stdio.h>
int main() {
    int a, b;
    int du;
    printf("Nhap a: ");
    scanf("%d", &a);

    printf("Nhap b: ");
    scanf("%d", &b);
    while (b != 0) {
        du = a % b;
        a = b;
        b = du;
    }
    printf("Uoc chung lon nhat la: %d", a);
    return 0;
}
