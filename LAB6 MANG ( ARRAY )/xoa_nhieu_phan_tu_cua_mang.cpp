#include<stdio.h>
#include<stdbool.h>

#define MAX 100

void timViTri(int arr[], int n, int giaTri) {
	int dem = 0;
	int vt;
	for(int i = 0;i<n;i++) {
		if(arr[i] == giaTri) {
			printf("arr[%d] = %d\n",i,giaTri);
			dem ++;
		}
	}
	
	if(dem == 0) {
		printf("Khong co gia tri %d trong mang \n",giaTri);
	}
	
}

void nhapMang(int arr[], int n) {
	for(int i = 0;i<n;i++) {
		printf("nhap arr[%d] = ",i);
		scanf("%d",&arr[i]);
	}
}

void deleteOne(int arr[], int &n, int viTriXoa) {
	for(int i = viTriXoa;i<n;i++) {
		arr[i] = arr[i+1];
	}
	n--; 	
}

void deleteItems(int arr[], int &n, int giaTriXoa) {
	for(int i = 0;i<n;i++) {
		if(arr[i] == giaTriXoa) {
			deleteOne(arr,n,i);
		}
	}
}

void xuatMang(int arr[], int n) {
	for(int i = 0;i<n;i++) {
		printf(" arr[%d] = %d \t",i,arr[i]);
	}
}

int main(){
	int n;
	int arr[100];
	printf("Moi nhap vao so phan tu thuc cua mang: ");
	scanf("%d",&n);
	nhapMang(arr,n);
	printf("Mang truoc khi xoa: \n");
	xuatMang(arr,n);
	//	deleteOne(arr,n,3);
	//	printf("\nMang sau khi xoa phan tu arr[3] la: \n");
	printf("\nCac phan tu 10 nam trong mang la: ");
	timViTri(arr,n,10);
	printf("\n Mang sau khi xoa gia tri 10 la: \n");
	deleteItems(arr,n,10);
	xuatMang(arr,n);
	return 0;
}
