#include <stdio.h>
int maxOfThree(int a, int b, int c) {
    int max = a;
    if (b > max) max = b;
    if (c > max) max = c;
    return max;
}
int main() {
    int a, b, c;
    int check;
    do {
        printf("Nhap 3 so nguyen: ");
        check = scanf("%d%d%d", &a, &b, &c);

        if (check != 3) {
            printf("Nhap lai!\n");
            while(getchar() != '\n'); 
        }
    } while (check != 3);
    printf("So lon nhat la: %d", maxOfThree(a, b, c));
    return 0;
}