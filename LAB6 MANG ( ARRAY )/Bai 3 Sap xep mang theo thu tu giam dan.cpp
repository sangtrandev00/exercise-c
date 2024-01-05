#include<stdio.h>
#include<math.h>
int main () {
	int i,n;
	int j;
	int temp;
	printf("xin moi nhap vao so phan tu cua mang: "); // nhap so luong phan tu cua mang
	scanf("%d",&n);
	int arr[n]; // Tao sao phai khai bao dong nay nhi => minh chua hieu
	// nhap gia tri tung phan tu cua mang VD: arr[0] = 1; arr[3]=3;....
	for (i=0;i<n;i++) {
		printf("xin moi nhap so phan tu vao vi tri thu a[%d]: ",i);
		scanf("%d",&arr[i]); }
	for (i = 0;i<n-1;i++) 
		for (j=i+1;j<n;j++) {
			if(arr[j]<arr[i]) {
			temp=arr[i];
			arr[i]=arr[j];
			arr[j]=temp;
			}
		}
	// Thuat toan bubble sort sap xep cac ky tu.
	for ( i=0;i<n;i++) {
	printf("Mang sau khi da sap xep la: arr[%d] = %d \n",i,arr[i]);
	}
	return 0;
}
// finished . Next time ( 27/12/2021 )
