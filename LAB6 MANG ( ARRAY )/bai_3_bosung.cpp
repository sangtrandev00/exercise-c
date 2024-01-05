#include<stdio.h>

void nhapMang(int arr[], int n) {
	for(int i = 0;i<n;i++) {
		printf("Nhap phan tu thu arr[%d]: ",i);
		scanf("%d",&arr[i]);
	}
}

void xuatMang(int arr[], int n) {
	for(int i = 0;i<n;i++) {
		printf("arr[%d] = %d\t",i,arr[i]);
	}
}

void arrange(int arr[], int n) {
	for(int i = 0; i< n; i ++) {
		for(int j = i+1;j<n;j++) {
			if(arr[i] < arr[j]) {
				int temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
	}
}

int main() {
		int arr[100];
		int n;
		do {
			printf("Xin moi nhap vao so phan tu mang:(0<n<100): ");
			scanf("%d",&n);
		}
		while(n<0||n>100);
		
		nhapMang(arr,n);
		printf("\n mang truoc khi sap xep: \n");
		
		xuatMang(arr,n);
		arrange(arr,n);
		
		printf("\n Mang sau khi sap xep giam dan!\n");
		xuatMang(arr,n);
	return 0;
}
