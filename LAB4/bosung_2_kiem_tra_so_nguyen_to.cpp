#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main() {
	// xay dung chuong trinh xac dinh so nguyen to!
	float x;
	printf("Xin moi nhap vao so x: ");
	scanf("%f",&x);
	if(x !=(int)x ) {
		printf("%.2f khong phai so nguyen!\n",x);
	} else {
		printf("%.2f la so nguyen!\n",x);
	}

	int i = 2;
	int dem = 0;
	if(x ==(int)x && x>1) {		
		while(i<=sqrt(x)) {
		if((int)x%i==0 ) {
			dem=1;
		}
		i++;
	}
	   
	if(dem == 0) {
		printf("%.2f la so nguyen to!",x);
	} else {
		printf("%.2f khong phai la so nguyen to!",x);
		}
	}
	else {
		printf("%.2f khong phai la so nguyen to!",x);
	}

	
	return 0;
}
