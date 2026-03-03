#include <stdio.h>
int is_leap_year(int year) {
    if ((year % 400 == 0) || (year % 4 == 0 && year % 100 != 0)) {
        return 1;   
    } else {
        return 0;  
    }
}
int get_days_in_month(int month, int year) {
    switch (month) {
        case 1: case 3: case 5: case 7:
        case 8: case 10: case 12:
            return 31;
        case 4: case 6: case 9: case 11:
            return 30;
        case 2:
            if (is_leap_year(year)) {
                return 29;
            } else {
                return 28;
            }
        default:
            return -1;  
    }
}
int main() {
    int month, year;
    int days;
    do {
        printf("Nhap thang (1-12): ");
        scanf("%d", &month);
        if (month < 1 || month > 12) {
            printf("Nhap sai! Vui long nhap lai.\n");
        }
    } while (month < 1 || month > 12);
    do {
        printf("Nhap nam (>0): ");
        scanf("%d", &year);
        if (year <= 0) {
            printf("Nhap sai! Vui long nhap lai.\n");
        }
    } while (year <= 0);
    days = get_days_in_month(month, year);
    printf("Thang %d nam %d co %d ngay.\n", month, year, days);
    return 0;
}