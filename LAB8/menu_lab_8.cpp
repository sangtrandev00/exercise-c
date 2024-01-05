#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#define MAX 100

typedef struct sinhvien {
	char mssv[25];
	char ten[50];
	char nganh[75];
	float diemTrungBinh;
}sv;

int n;
sv svArr[100];
int nhapInt(char str[]) {
	printf("%s",str);
	scanf("%d",&n);
	return n;	
}

void nhapSv(sv svArr[], int n) {
	for(int i = 0;i<n;i++) {
	printf("nhap thong tin sinh vien thu %d\n",i+1);
	fflush(stdin);
	printf("Nhap vao mssv: ");
	gets(svArr[i].mssv);
	//fgets(svArr[i].mssv,sizeof(svArr[i].mssv),stdin);
	printf("nhap vao ten sinh vien: ");
	//fgets(svArr[i].ten,sizeof(svArr[i].ten),stdin);
	gets(svArr[i].ten);
	printf("nhap vao nganh hoc: ");
	//fgets(svArr[i].nganh,sizeof(svArr[i].nganh),stdin);
	gets(svArr[i].nganh);
	reEnterGrade:
	printf("Nhap vao diem trung binh: ");
	scanf("%f",&svArr[i].diemTrungBinh);
	if(svArr[i].diemTrungBinh>10 || svArr[i].diemTrungBinh<0) {
			printf("Ban nhap diem khong chinh xac, moi nhap lai.");
			goto reEnterGrade;
		}
	}
}

void xuatSv(sv svArr[], int n) {
	printf("MSSV\tTen Sinh Vien\tNganh Hoc\tDiem Trung Binh\n");
	for(int i = 0;i<n;i++) {
		printf("%s\t%s\t%-10s\t%f\n",svArr[i].mssv,svArr[i].ten,svArr[i].nganh,svArr[i].diemTrungBinh);
	}
}

void section1() {
	n = nhapInt("Nhap so luong sinh vien: ");
	sv svArr[100];
	nhapSv(svArr,n);
	xuatSv(svArr,n);
}

void sapXep(sv svArr[], int n) {
	for(int i = 0;i<n-1;i++) {
		for(int j = i+1;j<n;j++) {
			if(svArr[i].diemTrungBinh > svArr[j].diemTrungBinh) {
				sv svTemp;
				svTemp = svArr[i];
				svArr[i] = svArr[j];
				svArr[j] = svTemp; 
			}
		}
	}
}

void section2(){	
	n = nhapInt("Nhap so luong sinh vien: ");
	nhapSv(svArr,n);
	sapXep(svArr,n);
	printf("-------------------------------------------------------\n");
	printf("Danh sach sinh vien sau khi sap xep theo diem trung binh tang dan la: \n");
	xuatSv(svArr,n);
}

void timSv(sv svArr[], int n, char mssv[]) {
	int viTri;
	int dem = 0;
	
	for(int i = 0;i<n;i++) {
		if(strcmp(mssv,svArr[i].mssv) == 0) {
			viTri = i;
			dem ++;
		}
	}
	
	if(dem !=0) {
		printf("MSSV\tTen Sinh Vien\tNganh Hoc\tDiem Trung Binh\n");
		printf("%s\t%s\t%-10s\t\t%f\n",svArr[viTri].mssv,svArr[viTri].ten,svArr[viTri].nganh,svArr[viTri].diemTrungBinh);
	}
	
}

void section3() {
	n = nhapInt("nhap so luong sinh vien: ");
	nhapSv(svArr,n);
	xuatSv(svArr,n);
	printf("===================Tim kiem thong tin sinh vien: ====================\n");
	fflush(stdin);
	char mssvTim[50];
	printf("moi nhap vao mssv can tim: ");
	//fgets(mssvTim,sizeof(mssvTim),stdin);
	gets(mssvTim);
	printf("Sinh vien sau khi tim theo MSSV: %s la:\n",mssvTim);
	timSv(svArr,n,mssvTim);
}

void menu(){
		int choose = 0;
		do {
		
		system("cls");
		printf("\t\t\t\t**************************MENU*****************************\n");
		printf("\t\t\t\t* 1: Xay dung chuong trinh luu thong sinh vien            *\n");
		printf("\t\t\t\t* 2: Sap xep sinh vien theo diem tang dan                 *\n");
		printf("\t\t\t\t* 3: Tim kiem sinh vien theo ma sinh vien                 *\n");
		printf("\t\t\t\t* Nhan phim bat ky de thoat chuong trinh:                 *\n");
		printf("\t\t\t\t***********************************************************\n");
		printf("\t\t\t\t*        Xin moi nhap chuc nang can thuc hien:            *\n");
		scanf("%d",&choose);
		
		switch(choose) {
			case 1:
				section1();
				break;
				
			case 2:
				section2();
				break;
			case 3:
				section3();
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
	
}

int main(){
	menu();
	return 0;
}
