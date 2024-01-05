#include<stdio.h>
#include<stdlib.h>
#include<math.h>

void nhapMaTran(int arr[][100],int n, int m) {
	for(int i =0;i<n;i++) {
		for(int j=0;j<m;j++) {
			printf("Nhap phan tu arr[%d][%d] = ",i,j);
			scanf("%d",&arr[i][j]);
		}
	}
}

void xuatMaTran(int arr[][100],int n, int m) {
	for(int i = 0;i<n;i++) {
		for(int j = 0;j<m;j++) {
			printf("arr[%d][%d] = %d\t",i,j,arr[i][j]*arr[i][j]);
		}
		printf("\n");
	}
}

int main() {
	int arr[100][100];
	int n,m;
	printf("Xin moi nhap vao so hang cua ma tran: ");
	scanf("%d",&n);
	printf("xin moi nhap va so cot cua ma tran: ");
	scanf("%d",&m);
	nhapMaTran(arr,n,m);
//	system("cls"); // xoa man hinh cac phan tu truoc do!
	printf("\n Ma tran binh phuong\n");
	xuatMaTran(arr,n,m);
	return 0;
}
