#include<stdio.h>
#include<math.h>
int main(){
	float x;
	printf("Xin moi nhap vao x =");
	scanf("%f",&x);
	
	if(x == (int)x) {
		printf("%.2f la so nguyen\n",x);
	} else {
		printf("%.2f khong phai la so nguyen\n",x);
	}
	
	if(x>1 && sqrt(x) == (int)sqrt(x)) {
		printf("%.2f la so chinh phuong!\n",x);
	} else {
		printf("%.2f khong phai la so chinh phuong!\n",x);
	}
	return 0;
} 
