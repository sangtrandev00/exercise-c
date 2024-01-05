#include<stdio.h>
typedef struct sinhvien {
	char mssv[25];
	char ten[50];
	char nganh[75];
	float diemTrungBinh;
}sv;


void nhapSinhVien(sv svArr[],int n) {
	for(int i = 0;i<n;i++) {
	printf("nhap thong tin sinh vien thu %d\n",i+1);
	//getchar();
	fflush(stdin);
	printf("Nhap vao mssv: ");
	fgets(svArr[i].mssv,sizeof(svArr[i].mssv),stdin);
	//getchar();
	//fflush(stdin);
	printf("nhap vao ten sinh vien: ");
	fgets(svArr[i].ten,sizeof(svArr[i].ten),stdin);
	//getchar();
	printf("nhap vao nganh hoc: ");
	fgets(svArr[i].nganh,sizeof(svArr[i].nganh),stdin);
	//getchar();
	//fflush(stdin);
	printf("Nhap vao diem trung binh: ");
	//fgets(svArr[i].diemTrungBinh,sizeof(svArr[i].diemTrungBinh),stdin);
	scanf("%f",&svArr[i].diemTrungBinh);
	}
}

void xuatSinhVien(sv svArr[], int n) {
	for(int i = 0;i<n;i++) {
		printf("%s\t%s\t%s\t%f\n",svArr[i].mssv,svArr[i].ten,svArr[i].nganh,svArr[i].diemTrungBinh);
		
//		printf("MSSV: %s",svArr[i].mssv);
//		printf("Ten sinh vien: %s",svArr[i].ten);
//		printf("Nganh hoc: %s",svArr[i].nganh);
//		printf("Diem trung binh: %f",svArr[i].diemTrungBinh);
	}
}

int main() {
	int n;
	sv svArr[100];
	printf("Xin moi nhap vao so luong sinh vien: ");
	scanf("%d",&n);
	
	
	// xuat thong tin cua tat ca sinh vien ra man hinh
	printf("MSSV\tTen Sinh Vien\tNganh Hoc\tDiem Trung Binh\n");
	
	
	return 0;
}
