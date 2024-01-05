#include<stdio.h>
#include<string.h>
// sap xep sinh vien theo diem tang dan.

typedef struct sinhvien {
	char mssv[25];
	char ten[50];
	char nganh[75];
	float diemTrungBinh;
}sv;

void nhapSv(sv svArr[], int n) {
	for(int i = 0;i<n;i++) {
	printf("nhap thong tin sinh vien thu %d\n",i+1);
	fflush(stdin);
	printf("Nhap vao mssv: ");
	fgets(svArr[i].mssv,sizeof(svArr[i].mssv),stdin);
	printf("nhap vao ten sinh vien: ");
	fgets(svArr[i].ten,sizeof(svArr[i].ten),stdin);
	printf("nhap vao nganh hoc: ");
	fgets(svArr[i].nganh,sizeof(svArr[i].nganh),stdin);
	printf("Nhap vao diem trung binh: ");
	scanf("%f",&svArr[i].diemTrungBinh);
	}
}
// sap xep sinh vien
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


// xuat sinh vien!
void xuatSv(sv svArr[], int n) {
		for(int i = 0;i<n;i++) {
		//printf("%s\t%s\t%s\t%f\n",svArr[i].mssv,svArr[i].ten,svArr[i].nganh,svArr[i].diemTrungBinh);
		printf("MSSV: %s",svArr[i].mssv);
		printf("Ten sinh vien: %s",svArr[i].ten);
		printf("Nganh hoc: %s",svArr[i].nganh);
		printf("Diem trung binh: %f\n",svArr[i].diemTrungBinh);
	}
}
int main(){
	int n;
	sv svArr[100];
	printf("Xin moi nhap vao so luong sinh vien:");
	scanf("%d",&n);
	fflush(stdin);
	nhapSv(svArr,n);
	fflush(stdin);
	sapXep(svArr,n);
	printf("-------------------------------------------------------\n");
	printf("Danh sach sinh vien sau khi sap xep theo diem trung binh tang dan la: \n");
	xuatSv(svArr,n);
	return 0;
}
