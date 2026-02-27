#include <stdio.h>
int sumOfDivisors(int n) {
    int sum = 0;
    int i;
    
    for(i = 1; i <= n; i++) {
        if(n % i == 0) {
            sum += i;
        }
    }
    return sum;
}
int main() {
    int n;
    do {
        printf("Enter a positive integer n: ");
        scanf("%d", &n);
        
        if(n <= 0) {
            printf("Nhap sai, vui long nhap lai!\n");
        } 
    } while(n <= 0);

    printf("Sum of divisors of %d is: %d\n", n, sumOfDivisors(n));
    return 0;
}