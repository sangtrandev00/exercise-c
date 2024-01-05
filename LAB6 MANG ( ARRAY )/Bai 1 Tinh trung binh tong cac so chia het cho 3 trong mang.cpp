#include<stdio.h>
#include<math.h>
int main () {
	int i,n;
	int dem=0; double tong=0;
	double trungBinhTong;
	printf("xin moi nhap vao so phan tu cua mang: "); // nhap so luong phan tu cua mang
	scanf("%d",&n);
	
	int arr[n];
	// nhap gia tri tung phan tu cua mang VD: arr[0] = 1; arr[3]=3;....
	for (i=0;i<n;i++) {
		printf("xin moi nhap so phan tu vao vi tri thu a[%d]: ",i);
		scanf("%d",&arr[i]);
	}
	// xuat tung gia tri cua mang tu arr[0] ->arr[n]
	for (i=0;i<n;i++) {
		printf("Vi tri thu a[%d] co Gia Tri la %d\n",i,arr[i]);
	}
	// tinh tong cac so chia het cho 3
	for (i=0;i<n;i++ ) {
		if(arr[i]%3==0) {
		tong =tong+arr[i];
		dem++;
	}
	}
	// tinh trung binh cac so chia het cho 3
	trungBinhTong=tong/dem;
	printf("Tong cac so chia het cho 3 la: %lf\n",tong);
	printf("trung binh tong cac so chia het cho 3 la: %lf",trungBinhTong);
	return 0;
}

// Giai quyet thanh cong roi, nhung phan tinh tong chua ra duoc so thap phan.
