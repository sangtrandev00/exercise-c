#include<stdio.h>

void nhapMang(int arr[], int n) {
	for(int i = 0;i<n;i++) {
		printf("Nhap phan tu thu arr[%d]: ",i);
		scanf("%d",&arr[i]);
	}
}

int maxArr(int arr[], int n) {
	int max = arr[0];
	for(int i = 1;i<n;i++) {
		if(arr[i] > max) {
			max = arr[i];
		}
	}
	return max;
}

int minArr(int arr[], int n) {
	int min = arr[0];
		for(int i = 1;i<n;i++) {
		if(arr[i] < min) {
			min = arr[i];
		}
	}
	return min;
}


int main() {
	int n, arr[100];
	printf("Xin moi nhap vao so phan tu cua mang: ");
	scanf("%d",&n);	
	nhapMang(arr,n);
	printf("Gia tri lon nhat cua mang la: %d\n", maxArr(arr,n));
	printf("Gia tri nho nhat cua mang la: %d\n",minArr(arr,n));
	return 0;
}
