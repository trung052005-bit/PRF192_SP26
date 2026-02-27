#include <stdio.h>

void printASCII() {
    for (char c = 'A'; c <= 'Z'; c++) {
        printf("%c : %d\n", c, (int)c);
    }
}
int main() {
    char choice;
    do {
        printf("Ban co muon in ma ASCII tu A den Z? (y/n): ");
        scanf(" %c", &choice);

        if (choice == 'y' || choice == 'Y') {
            printASCII();
        }
        else if (choice != 'n' && choice != 'N') {
            printf("Nhap lai!\n");
        
    }
    } while (choice != 'y' && choice != 'Y' && 
             choice != 'n' && choice != 'N');
    return 0;
}