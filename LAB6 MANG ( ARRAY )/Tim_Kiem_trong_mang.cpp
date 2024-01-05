#include<stdio.h>

void nhapMang(int arr[], int n) {
	
	for(int i = 0;i<n;i++) {
		printf("Nhap arr[%d] = ",i);
		scanf("%d",&arr[i]);
	}
	
}

void findIndex(int viTri,int arr[], int n) {
	
	int dem = 0;
	for(int i =0;i<n;i++) {
		if(viTri == i) {
			printf("Vi tri arr[%d] = %d\n",viTri,arr[i]);
			dem = 1;
			break;
		}
	}
	
	if(dem ==0) {
		printf("Khong tim thay gia tri cua vi tri %d trong mang\n",viTri);
	}
	
}

void findValue(int value, int arr[], int n) {
	
	int dem = 0;
	for(int i = 0;i<n;i++) {
		if(value ==arr[i]) {
			printf("So %d nam o vi tri arr[%d]\n",value,i);
			dem = 1;
			//break; // Khong co break!
		} 
	}
	
	if(dem == 0) {
		printf("Khong tim thay gia tri %d trong mang\n",value);
	}
	
}

int main(){
	
	// tim kiem phan tu trong mang
	// 1. Nhap vao vi tri => gia tri
	// 2. Nhap vao gia tri => vi tri.
	
	int n;
	printf("Nhap vao so phan tu: ");
	scanf("%d",&n);
	int arr[n];
	nhapMang(arr,n);
	
	int viTri;
	printf("Nhap vao vi tri can tim: ");
	scanf("%d",&viTri);
	findIndex(viTri,arr,n);
	
	int value;
	printf("Nhap vao gia tri can tim: ");
	scanf("%d",&value);
	findValue(value,arr,n);
	return 0;
}
