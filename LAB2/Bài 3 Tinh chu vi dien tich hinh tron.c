#include<stdio.h>
#include<math.h>
int main() {
	#define pi 3.141592
	int r;
	printf("Xin moi nhap vao ban kinh cua duong tron: ");
	scanf("%d",&r);
	printf("Chu vi hinh trong la: %f\n Dien tich hinh tron la %lf\n",2*pi*r,pi*r*r);
	return 0;
}

