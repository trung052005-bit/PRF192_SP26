//1. Tao file text "baitap1.txt", ghi 1 so vao file nay.
#include <stdio.h>

int main(){
    FILE *fp;
    fp = fopen("baitap1.txt", "w");

    // Kiem tra thanh cong
    if(fp == NULL){
        printf("Error!");
        return 0;
    }

    int n;
    printf("Nhap vao so n: ");
    scanf("%d", &n);

    fprintf(fp, "Gia tri n: %d", n);

    // dong file
    fclose(fp);
    
     // Doc file
    fp = fopen("baitap1.txt", "r");
    if (fp == NULL) 
    {
        printf("Error!");
        return 0;
    }
    char s;
    do {
        s = getc(fp); 
        if (s != EOF) {
            printf("%c", s);
        }
    } while (s != EOF);
    fclose(fp);
    return 0;
}