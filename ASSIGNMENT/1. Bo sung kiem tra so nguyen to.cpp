#include<stdio.h>
#include<math.h>

int main(){
	float x; 
	printf("Xin moi nhap vao mot so x = ");
	scanf("%f",&x);
	if(x == (int)x) {
		printf("%.2f la so nguyen!\n",x);
	} else {
		printf("%.2f khong phai la so nguyen!\n",x);
	}
	// check so nguyen to!
	if(x>1 && x==(int)x) {
		int kiemTra = 1;
		int i = 2;
		
		while(i<=sqrt(x)) {
			if((int)x%i==0) {
				kiemTra = 0;
				break;
			}
			i++;
		}
		
		if(kiemTra ==1) {
			printf("%.2f la so nguyen to!\n",x);
		} else {
			printf("%.2f khong phai la so nguyen to!\n",x);
		}			

	} else {
		printf("%.2f khong phai la so nguyen to\n",x);
	}
	// check so chinh phuong!
	if(x>1 && sqrt(x) == (int)sqrt(x)) {
		printf("%.2f la so chinh phuong!\n",x);
	} else {
		printf("%.2f khong phai la so chinh phuong!\n",x);
	}
	return 0;
}
