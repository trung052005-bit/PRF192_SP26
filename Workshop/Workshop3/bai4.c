#include <stdio.h>
void show_menu() {
    printf("1. +\n");
    printf("2. -\n");
    printf("3. *\n");
    printf("4. /\n");
    printf("0. Exit\n");
    printf("Choose: ");
}
void processor() {
    int choice;
    float a, b, result;
    do {
        show_menu();
        scanf("%d", &choice);
        switch (choice) {
            case 1:
                scanf("%f %f", &a, &b);
                result = a + b;
                printf("%.2f\n", result);
                break;
            case 2:
                scanf("%f %f", &a, &b);
                result = a - b;
                printf("%.2f\n", result);
                break;
            case 3:
                scanf("%f %f", &a, &b);
                result = a * b;
                printf("%.2f\n", result);
                break;
            case 4:
                scanf("%f %f", &a, &b);
                if (b != 0) {
                    result = a / b;
                    printf("%.2f\n", result);
                }
                break;
            case 0:
                break;
            default:
                break;
        }
    } while (choice != 0);
}
int main() {
    processor();
    return 0;
}