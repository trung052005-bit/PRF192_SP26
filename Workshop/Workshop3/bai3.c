#include <stdio.h>
float calculate_salary(float hours, float rate) {
    float salary;
    if (hours > 40) {
        salary = 40 * rate + (hours - 40) * rate * 1.5;
    } else {
        salary = hours * rate;
    }
    return salary;
}
int main() {
    float hours, rate, total_salary;
    do {
        printf("Nhap so gio lam trong tuan: ");
        scanf("%f", &hours);

        if (hours < 0) {
            printf("Nhap sai! Vui long nhap lai.\n");
        }
    } while (hours < 0);
    do {
        printf("Nhap tien cong moi gio: ");
        scanf("%f", &rate);
        if (rate <= 0) {
            printf("Nhap sai! Vui long nhap lai.\n");
        }
    } while (rate <= 0);
    total_salary = calculate_salary(hours, rate);
    printf("Tong luong trong tuan: %.2f\n", total_salary);
    return 0;
}