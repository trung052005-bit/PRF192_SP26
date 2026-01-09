#include <stdio.h>

int main() {
    char name[50];
    int age;

    printf("Nhap ten cua ban: ");
    scanf("%s", name);

    printf("Nhap tuoi cua ban: ");
    scanf("%d", &age);

    printf("Xin chao %s!\n", name);
    printf("Ban %d tuoi.\n", age);

    return 0;
}
