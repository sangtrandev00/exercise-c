#include<stdio.h>
#include<math.h>

bool isInteger(float x) {
	if((int ) x == x) {
		return 1;
	} else {
		return 0;
	}
}

bool isPrime(float x) {
	if(isInteger(x) && x > 1) {
		int i = 2;
		int dem = 1;
		while(i<=sqrt(x)) {
			if((int)x % i ==0) {
				dem =0;
			}
			i++;
		}
		if(dem == 0) {
			return 1;
		} else {
			return 0;
		}
	} else {
		return 0;
	}
}

bool isSquare(float x) {
	if(isInteger(x) && x > 1 && (int ) sqrt (x) == sqrt(x)) {
		return 1;
	}
	else {
		return 0;
	}
}


int main(){
	
	float x;
	printf("Nhap vao mot so x: ");
	scanf("%f",&x);
	// check isInteger ???
	if(isInteger(x)) {
		printf("%.2f la so nguyen",x);
	}else {
		printf("%.2f khong phai la so nguyen",x);
	}
	// check is Prime ???
	if(isPrime(x)) {
		printf("%.2f la so nguyen to",x);
	} else {
		printf("%.2f khong la so nguyen to",x);
	}
	
	// check isSquare
	if(isSquare(x)) {
		printf("%.2f la so chinh phuong ",x);
	} else {
		printf("%.2f khong phai la so chinh phuong ",x);
	}
	
	return 0;
}
