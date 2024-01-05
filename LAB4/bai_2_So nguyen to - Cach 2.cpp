#include<stdio.h>
#include<math.h>
int main() {
	int i, dem =0;
	int so;
	printf("Xin moi nhap so nguyen vao ban phim:");
	scanf("%d",&so);
	for (i=1;i<=so;i++) {
		if(so%i==0) dem++;
	}
	if (dem == 2) {
		printf("Day la so nguyen to");
	} else {
		printf("Day khong phai la so nguyen to");
	}
	return 0;
}
