#include<stdio.h>
void hoanVi(float &a,float &b) {
	float temp = a;
	a = b;
	b = temp;
}

int main(){
	float a,b;
	printf("nhap vao 2 so a,b: ");
	scanf("%f%f",&a,&b);
	printf("2 so %.2f va %.2f truoc khi hoan vi la: \n",a,b);
	printf("a = %.2f\n",a);
	printf("b = %.2f\n",b);
	printf("2 so %.2f va %.2f sau khi hoan vi la: \n",a,b);
	hoanVi(a,b);
	printf("a = %.2f\n",a);
	printf("b = %.2f\n",b);	
	return 0;
}
