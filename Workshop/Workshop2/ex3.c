#include <stdio.h>
int main()
{
    int n;
    printf("Nhap n");
    while (scanf("%d", &n) != 1 || n < 1 || n > 10) {
        printf("\nNhap lai n: ");
        fflush(stdin);   
    }
    int dem = 1;

    while (dem <= 10) {
        printf("%d x %d = %d\n", n, dem, n * dem);
        dem++;
    }
    printf("Da xong");

    return 0;
}