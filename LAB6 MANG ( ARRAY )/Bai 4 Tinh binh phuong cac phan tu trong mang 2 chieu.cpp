#include<stdio.h>
int main() {
	// input: nhap vao tu ban phim 1 ma tran cac so nguyen. Mang gom n hang, m cot
	// output: Xuat ra man hinh ma tran binh phuong.
	int i,j,m,n;

	printf("xin moi nhap vao so hang : "); // nhap so luong phan tu cua mang
	scanf("%d",&n);
	printf("Xin moi nhap vao so cot : ");
	scanf("%d",&m);
	// nhap mang 2 chieu gom n: cot, m: hang
	int arr[n][m]; // Ham nay phai khai bao sau khi nhap n va m. **note 
	for (i=0;i<n;i++) {
	for (j=0;j<m;j++)	
	{
		printf("Xin moi nhap vao vi tri mang thu a[%d][%d]: ",i,j);
		scanf("%d",&arr[i][j]);
	}
	}
	// xuat mang 2 chieu ma tran binh phuong ^2

	for (i=0;i<n;i++) {
	for (j=0;j<m;j++) {
		printf("%d\t",arr[i][j]*arr[i][j]);
	}
	printf("\n");
	}
	return 0;
}

// finished
