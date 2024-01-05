#include<stdio.h>
#include<math.h>
int main()
{	
	double a,b,c;
	double delta;
	printf("xin moi nhap vao gia tri a: va b: c: de tinh nghiem cua phuong trinh bac 2\n");
	printf("moi nhap a:");
	scanf("%lf",&a);
	printf("moi nhap b:");
	scanf("%lf",&b);
	printf("moi nhap c:");
	scanf("%lf",&c);
	if(a==0) {
		if(b==0) {
		if ( c==0) {
			printf("Phuong trinh vo so nghiem");
		} else {
			printf("Phuong trinh vo nghiem");
		}
		
	} else {
		printf("phuong trinh ax+b=0 co nghiem la x=%lf",-c/b);
	}
	} else {
		delta= b*b - 4*a*c;
		if(delta<0) printf("Phuong trinh vo nghiem");
		else if (delta == 0) printf("Phuong trinh co nghiem kep x = %.2lf", -b/(2*a));
		else {
			printf("Phuong trinh co 2 nghiem rieng biet x1 =%.2lf, x2=%.2lf",(-b+sqrt(delta))/(2*a),(-b-sqrt(delta))/(2*a));
		}
	}
	return 0;
}
