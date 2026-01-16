#include <stdio.h>

int main() {
    char name[50];
    int age;

    // Nhập tên
    printf("Nhap ten cua ban: ");
    fgets(name, sizeof(name), stdin);

    // Nhập tuổi
    printf("Nhap tuoi cua ban: ");
    scanf("%d", &age);

    // In ra kết quả
    printf("\nThong tin cua ban:\n");
    printf("Ten: %s", name);
    printf("Tuoi: %d\n", age);

    return 0;
}