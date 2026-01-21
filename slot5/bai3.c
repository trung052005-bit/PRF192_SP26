#include <stdio.h>

int main() {
    float a,b,c;
    printf("nhap a, b, c: ");
    scanf("%f%f%f",&a,&b,&c);

    float max;
    if (a > b && a >c) 
            max = a;
        
    else if (b > a && b > c) 
        max = b;
    else 
        max = c;
        
    printf("gia tri lon nhat la: %.2f\n", max);
    return 0;
}

