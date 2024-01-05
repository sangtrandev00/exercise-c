#include<stdio.h>
#include<math.h>
// ucln & bcnn

int ucln(int a,int b) {
	a = abs(a);
	b = abs(b);
	if(a ==0 || b ==0) {
		return a + b;
	}
	//	thuat toan euclid
	while(a!=b) {
		if(a > b) a =  a - b;
		else b =  b - a;
	}
	
	return a;
}

int bcnn(int a ,int b) {
	return a*b/ucln(a,b);
}


int main(){
	int a,b;
	nhapLai:
	printf("Moi nhap vao a: ");
	scanf("%d",&a);
	
	printf("Moi nhap vao b: ");
	scanf("%d",&b);
	
	if( a == 0 && b==0) {
		printf("Ban nhap a hoac b khong chinh xac, moi nhap lai: \n");
		goto nhapLai;
	}
	
	printf("uoc chung lon nhat cua %d va %d la: %d\n",a,b,ucln(a,b));
	printf("boi chung nho nhat cua %d va %d la: %d\n",a,b,bcnn(a,b));
	
	return 0;
}
