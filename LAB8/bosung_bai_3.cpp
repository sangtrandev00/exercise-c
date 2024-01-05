#include<stdio.h>
#include<string.h>

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
	//fgets(svArr[i].mssv,sizeof(svArr[i].mssv),stdin);
	gets(svArr[i].mssv);
	printf("nhap vao ten sinh vien: ");
	//fgets(svArr[i].ten,sizeof(svArr[i].ten),stdin);
	gets(svArr[i].ten);
	printf("nhap vao nganh hoc: ");
	//fgets(svArr[i].nganh,sizeof(svArr[i].nganh),stdin);
	gets(svArr[i].nganh);
	printf("Nhap vao diem trung binh: ");
	scanf("%f",&svArr[i].diemTrungBinh);
	}
}
// xuat sinh vien!
void xuatSv(sv svArr[], int n) {
		for(int i = 0;i<n;i++) {
		//printf("%s\t%s\t%s\t%f\n",svArr[i].mssv,svArr[i].ten,svArr[i].nganh,svArr[i].diemTrungBinh);
		printf("MSSV: %s\t",svArr[i].mssv);
		printf("Ten sinh vien: %s\t",svArr[i].ten);
		printf("Nganh hoc: %s\t",svArr[i].nganh);
		printf("Diem trung binh: %f\n",svArr[i].diemTrungBinh);
	}
}


// tim kiem sinh vien == mssv;

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
		printf("%s\t%s\t%s\t\t%.2f\n",svArr[viTri].mssv,svArr[viTri].ten,svArr[viTri].nganh,svArr[viTri].diemTrungBinh);
	}
	
}

int main() {
	int n;
	printf("Xin moi nhap vao so luong sinh vien: ");
	scanf("%d",&n);
	sv svArr[100];
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
	
	return 0;
}
