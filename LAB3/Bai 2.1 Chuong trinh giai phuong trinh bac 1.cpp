#include<stdio.h>
#include<math.h>
int main()
{
	double a,b;
	printf("xin moi nhap vao gia tri a: va b:\n");
	printf("moi nhap a:");
	scanf("%lf",&a);
	printf("moi nhap b:");
	scanf("%lf",&b);
	if(a==0) {
		if ( b==0) {
			printf("Phuong trinh vo so nghiem");
		} else {
			printf("Phuong trinh vo nghiem");
		}
		
	} else {
		printf("phuong trinh ax+b=0 co nghiem la %.2lf",-b/a);
	}
}
