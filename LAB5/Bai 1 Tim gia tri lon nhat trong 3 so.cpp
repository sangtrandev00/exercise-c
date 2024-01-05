#include<stdio.h>
#include<math.h>
		
	int GTLN () {
		int a,b,c;
		int max;
		printf("Nhap so thu nhat: ",a);
		scanf("%d",&a);
		printf("Nhap so thu nhat: ",b);
		scanf("%d",&b);
		printf("Nhap so thu nhat: ",c);
		scanf("%d",&c);
		if ( a>b) max = a;
		else max = b;
		if ( max > c ) max = max;
		else max = c ;
		return max;
		}
int main () {
	int giaTriLonNhat;
	giaTriLonNhat = GTLN();
	printf("Gia tri lon nhat la %d",giaTriLonNhat);
	return 0;
}
