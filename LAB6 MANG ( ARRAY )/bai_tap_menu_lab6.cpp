#include<stdio.h>
#include<math.h>
#include<stdlib.h>

const int MAX = 100;

// section 1
int nhapInt(char tb[]) {
	int n;
	do {
			printf("%s: ",tb);
			scanf("%d",&n);
	} while(n<0|| n>MAX);

	return n;
}

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
	printf("\n");
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
	printf("Trung binh cua cac so chia het cho 3 trong mang la: %.2lf\n",sum/dem);
}

void function1() {
	int arr[MAX];
	//printf("Xin moi nhap vao so phan tu cua mang: ");
	int n = nhapInt("Nhap so phan tu cua mang: ");
	nhapMang(arr,n);
	xuatMangChia3(arr,n);
}

//section 2
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

void function2() {
	int arr[MAX];
	int n = nhapInt("nhap vao so phan tu cua mang: ");
//	printf("Xin moi nhap vao so phan tu cua mang: ");
//	scanf("%d",&n);	
	nhapMang(arr,n);
	printf("Gia tri lon nhat cua mang la: %d\n", maxArr(arr,n));
	printf("Gia tri nho nhat cua mang la: %d\n", minArr(arr,n));
}

//section 3
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

void function3() {
		int arr[100];
		int n = nhapInt("Nhap vao so phan tu cua mang: ");
//		do {
//			printf("Xin moi nhap vao so phan tu mang:(0<n<100): ");
//			scanf("%d",&n);
//		}
//		while(n<0||n>100);
		nhapMang(arr,n);
		printf("\n mang truoc khi sap xep: \n");
		xuatMang(arr,n);
		arrange(arr,n);
		printf("\n Mang sau khi sap xep giam dan!\n");
		xuatMang(arr,n);
}


//section 4
void nhapMaTran(int arr[][100],int n, int m) {
	for(int i =0;i<n;i++) {
		for(int j=0;j<m;j++) {
			printf("Nhap phan tu arr[%d][%d] = ",i,j);
			scanf("%d",&arr[i][j]);
		}
	}
}

void xuatMaTranBinhPhuong(int arr[][100],int n, int m) {
	for(int i = 0;i<n;i++) {
		for(int j = 0;j<m;j++) {
			printf("arr[%d][%d] = %d\t",i,j,arr[i][j]*arr[i][j]);
		}
		printf("\n");
	}
}

void function4() {
	int arr[100][100];
	int n = nhapInt("Nhap so hang cua ma tran: ");
	int m = nhapInt("Nhap so cot cua ma tran: ");
	nhapMaTran(arr,n,m);
	printf("\n Ma tran binh phuong\n");
	xuatMaTranBinhPhuong(arr,n,m);
}

int main() {
	
	int choose = 0;
	
	do {
		system("cls");
		printf("\t\t\t\t**************************MENU*****************************\n");
		printf("\t\t\t\t* 1: Tinh trung binh tong cac so chia het cho 3 trong mang*\n");
		printf("\t\t\t\t* 2: Tinh GTLN va GTNN trong mang                         *\n");
		printf("\t\t\t\t* 3: Sap xep mang theo thu tu giam dan                    *\n");
		printf("\t\t\t\t* 4: Tinh binh phuong cac phan tu trong mang 2 chieu      *\n");
		printf("\t\t\t\t* Nhan phim bat ky de thoat chuong trinh:                 *\n");
		printf("\t\t\t\t***********************************************************\n");
		printf("\t\t\t\t*        Xin moi nhap chuc nang can thuc hien:            *\n");
		scanf("%d",&choose);
		
		switch(choose) {
			case 1:
				function1();
				break;
			case 2:
				function2();
				break;
			case 3:
				function3(); 
				break;
			case 4: 
				function4();
				break;
			default: 
				exit(0);
		}
		
		if(choose !=0) {
			printf("Nhan phim enter de tiep tuc: ");
			fflush(stdin);
			getchar();
		}
		
	} while(choose!=0);
	
	return 0;
	
}
