#include<stdio.h>
int main() {
	int i,n;
	printf("xin moi nhap vao so phan tu cua mang: "); // nhap so luong phan tu cua mang
	scanf("%d",&n);
	int arr[n]; // Tao sao phai khai bao dong nay nhi => minh chua hieu
	// nhap gia tri tung phan tu cua mang VD: arr[0] = 1; arr[3]=3;....
	for (i=0;i<n;i++) {
		printf("xin moi nhap so phan tu vao vi tri thu a[%d]: ",i);
		scanf("%d",&arr[i]); }
	// Tim GTLN
	int min = a[0];
	for(i=0;i<n;i++) {
		if(max < a[i]) max = a[i];
		if(min > a[i]) min = a[i];
	}
	printf("Gia tri lon nhat la: %d\ns",max);
	printf("Gia tri nho nhat la: %d",min);
	// Tim GTNN
	/*	int min = arr[0];
		for ( i=0;i<n;i++) 
	{
		if(max<arr[i+1]) min = min;
		else min = arr[i+1];
	}
	printf("Gia tri nho nhat la Min=%d",min); */
	
	return 0;
}
//finished
