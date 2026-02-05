#include <stdio.h>
int main() {
    int soDu = 1000000;  
    int luaChon;
    int soTienRut;
    while (1) {
        printf("1. Rut tien\n");
        printf("0. Thoat\n");
        printf("Chon: ");
        scanf("%d", &luaChon);
        if (luaChon == 0) {
            break;              
        }
        if (luaChon == 1) {
            printf("Nhap so tien rut: ");
            scanf("%d", &soTienRut);
            if (soTienRut <= 0) {
                printf("So tien khong hop le\n");
            } else if (soTienRut > soDu) {
                printf("So du khong du\n");
                break;
            } else {
                soDu -= soTienRut;
                printf("Rut thanh cong. So du con lai: %d\n", soDu);
            }
        }
    }
    return 0;
}
