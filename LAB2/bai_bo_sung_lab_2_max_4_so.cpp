#include<stdio.h>
int main() {
	int a,b,c,d;
	printf("nhap a: ");
	scanf("%d",&a);
	printf("nhap b: ");
	scanf("%d",&b);
	printf("nhap c: ");
	scanf("%d",&c);
	printf("nhap d: ");
	scanf("%d",&d);
	int maxAB;
	int maxCD;
	maxAB = a>b?a:b; // max a va b
	maxCD = c>d?c:d; // max c va d
	int max;
	max = maxAB>maxCD?maxAB:maxCD;
	printf("max 4 so la: %d",max);
	return 0;
}
