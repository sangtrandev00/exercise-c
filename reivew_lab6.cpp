#include<stdio.h>
#include<math.h>
// bai 1 Tinh trung binh tong cac so chia het cho 3 trong mang.
int main() {
	int i,j,n,m;
	int dem=0;
	double tong=0;
	printf("xin moi nhap vao so phan tu hang n:");
	scanf("%d&d",&n);
	printf("xin moi nhap vao so phan tu cot m:");
	scanf("%d&d",&m);
	int a[n][m];
	for (i=0;i<n;i++) {
		for(j=0;j<m;j++) {
			printf("Xin moi nhap phan tu a[%d][%d]=",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	printf("Ma tran binh phuong cua ham: ");
		for (i=0;i<n;i++) {
		for(j=0;j<n;j++) 
			{
			printf("%d\t",a[i][j]*a[i][j]);
			}
			printf("%n");
		}	
	// thuat toan sap xep mang bubble sort.
	return 0;
}
