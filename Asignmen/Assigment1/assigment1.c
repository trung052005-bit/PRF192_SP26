#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Product {
    int product_id;
    char product_name[50];
    float price;
    int quantity;
};

void writeProducts(const char *filename);
void appendProducts(const char *filename);
void readProducts(const char *filename);
void modifyProduct(const char *filename);
void clearBuffer();

int main() {
    const char *filename = "products.bin";
    int choice;

    do {
        printf("\n-- Product Management System --\n");
        printf("1. Write Products (Overwrite)\n");
        printf("2. Append Products\n");
        printf("3. Read Products\n");
        printf("4. Modify Product\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        
        if (scanf("%d", &choice) != 1) {
            printf("Loi: Vui long nhap so!\n");
            clearBuffer();
            continue;
        }

        switch (choice) {
            case 1: writeProducts(filename); break;
            case 2: appendProducts(filename); break;
            case 3: readProducts(filename); break;
            case 4: modifyProduct(filename); break;
            case 5: printf("Dang thoat chuong trinh...\n"); break;
            default: printf("Lua chon khong hop le!\n");
        }
    } while (choice != 5);

    return 0;
}

void clearBuffer() {
    int c;
    while ((c = getchar()) != '\n' && c != EOF);
}

void writeProducts(const char *filename) {
    FILE *file = fopen(filename, "wb");
    if (!file) {
        printf("Loi mo file!\n");
        return;
    }

    int n;
    printf("Nhap so luong san pham muon ghi moi: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        struct Product p;
        printf("\nNhap san pham thu %d:\n", i + 1);
        printf("ID: "); scanf("%d", &p.product_id);
        clearBuffer();
        printf("Ten san pham: "); fgets(p.product_name, 50, stdin);
        p.product_name[strcspn(p.product_name, "\n")] = 0;
        printf("Gia: "); scanf("%f", &p.price);
        printf("So luong: "); scanf("%d", &p.quantity);

        fwrite(&p, sizeof(struct Product), 1, file);
    }

    fclose(file);
    printf("Ghi file thanh cong!\n");
}

void appendProducts(const char *filename) {
    FILE *file = fopen(filename, "ab"); 
    if (!file) {
        printf("Loi mo file!\n");
        return;
    }

    int n;
    printf("Nhap so luong san pham muon them: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        struct Product p;
        printf("\nNhap san pham moi:\n");
        printf("ID: "); scanf("%d", &p.product_id);
        clearBuffer();
        printf("Ten san pham: "); fgets(p.product_name, 50, stdin);
        p.product_name[strcspn(p.product_name, "\n")] = 0;
        printf("Gia: "); scanf("%f", &p.price);
        printf("So luong: "); scanf("%d", &p.quantity);

        fwrite(&p, sizeof(struct Product), 1, file);
    }

    fclose(file);
    printf("Them san pham thanh cong!\n");
}

void readProducts(const char *filename) {
    FILE *file = fopen(filename, "rb"); 
    if (!file) {
        printf("File khong ton tai hoac chua co du lieu!\n");
        return;
    }

    struct Product p;
    printf("\n%-10s %-20s %-10s %-10s\n", "ID", "Product Name", "Price", "Quantity");
    printf("-----------------------------------------------------\n");

    while (fread(&p, sizeof(struct Product), 1, file)) {
        printf("%-10d %-20s %-10.2f %-10d\n", p.product_id, p.product_name, p.price, p.quantity);
    }
    printf("-----------------------------------------------------\n");

    fclose(file);
}

void modifyProduct(const char *filename) {
    FILE *file = fopen(filename, "rb+"); 
    if (!file) {
        printf("Loi mo file!\n");
        return;
    }

    int id, found = 0;
    printf("Nhap ID san pham can sua: ");
    scanf("%d", &id);

    struct Product p;
    while (fread(&p, sizeof(struct Product), 1, file)) {
        if (p.product_id == id) {
            found = 1;
            printf("Da tim thay! Nhap thong tin moi:\n");
            clearBuffer();
            printf("Ten moi: "); fgets(p.product_name, 50, stdin);
            p.product_name[strcspn(p.product_name, "\n")] = 0;
            printf("Gia moi: "); scanf("%f", &p.price);
            printf("So luong moi: "); scanf("%d", &p.quantity);

            fseek(file, -(long)sizeof(struct Product), SEEK_CUR);
            fwrite(&p, sizeof(struct Product), 1, file);
            printf("Cap nhat thanh cong!\n");
            break;
        }
    }

    if (!found) printf("Khong tim thay san pham co ID %d.\n", id);
    fclose(file);
}