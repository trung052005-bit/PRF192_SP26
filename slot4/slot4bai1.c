#include <stdio.h>

int main() {
    int day, month, year;
    // Ð?c d?nh d?ng dd/mm/yyyy (ví d?: 12/1/2025)
    if (scanf("%d/%d/%d", &day, &month, &year) != 3) {
        return 1; // l?i nh?p
    }

    // In ra v?i tháng/ ngày có 2 ch? s?
    printf("%02d/%02d/%d\n", day, month, year);
    return 0;
}

