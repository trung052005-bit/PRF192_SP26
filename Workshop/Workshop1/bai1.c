#include <stdio.h>
#include <math.h>

int main(){
	int x;
	printf("nhap x: ");
	scanf("%d",&x);
	int prex = x ;
	if(x<0)
	    x = -x;
    printf("|%d| = %d",prex,x);
    printf("\nCan bac 2 = %.2f",sqrt(x));
}