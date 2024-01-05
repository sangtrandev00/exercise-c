#include<stdio.h>
#include<math.h>
void hoanVi2(int *x,int *y){
	int temp;
	temp =*x;
	*x=*y;
	*y=temp;
}

int main() {
	int a,b;
	printf("Nhap 2 so a ,b: \n");
	printf("Nhap so a: ",a);
	scanf("%d",&a);
	printf("Nhap so b: ",b);
	scanf("%d",&b);
	hoanVi2(&a,&b);
	printf("2 so sau khi hoan vi la\n");
	printf("a= %d\n",a);
	printf("b= %d\n",b);
	return 0;
}
