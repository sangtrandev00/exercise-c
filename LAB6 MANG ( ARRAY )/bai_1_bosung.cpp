#include<stdio.h>

// tai sao lai sai nhi ? Kieu du lieu bi sai roi!!!

void nhapMang(int arr[], int n) {
	for(int i = 0;i<n;i++) {
		printf("Nhap phan tu thu arr[%d]: ",i);
		scanf("%d",&arr[i]);
	}
}

void xuatMangChia3(int arr[], int n) {
	double sum = 0;
	int dem = 0;
	for(int i = 0;i<n;i++) {
		if(arr[i]%3==0) {
			sum += arr[i];
			dem++;
		}
	}
	printf("Trung binh cua cac so chia het cho 3 trong mang la: %.2lf",sum/dem);
}

int main() {
	int arr[100];
	printf("Xin moi nhap vao so phan tu cua mang: ");
	int n;
	scanf("%d",&n);
	nhapMang(arr,n);
	//printf("Tong cac phan tu da nhap chia het cho 3 la: %d",xuatMangChia3(arr,n));
		//	float trungBinh = xuatMangChia3(arr,n);
	xuatMangChia3(arr,n);
	return 0;
}
