#include<stdio.h>
int main() {
	int a,b,c,d;
	printf("Nhap a: ");
	scanf("%d",&a);
	printf("Nhap a: ");
	scanf("%d",&b);
	printf("Nhap a: ");
	scanf("%d",&c);
	printf("Nhap a: ");
	scanf("%d",&d);
	int max = (a>b) ? ((a>c)?(a>d?a:d):(c>d?c:d)):((b>c)?(b>d?b:d):(c>d)?c:d);
	printf("Gia tri lon nhat cua 4 so a b c d la: %d",max);
	return 0;
}
