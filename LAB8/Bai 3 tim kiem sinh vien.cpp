#include<stdio.h>
#include<math.h>
int main() {
	// sau khi nhap thong tin sih vien vao mang. Tim kiem sinh vien theo ma sinh vien
	#include<stdio.h>
	struct sinhVien{
		char maSv[10];
		char tenSv[50];
		char nganh[50];
		float diemTrungBinh;
	};
	int main() 	{
	struct sinhVien mangSv[50]; // Khai bao mang Sinh Vien
	// nhap thong tin sinh vien vao mang
	int i,n;
	int j;
	printf("So sinh vien can nhap la: ");
	scanf("%d",&n);
	for(i=0;i<n;i++) 
	{
	printf("Xin moi nhap ma SV thu %d ",i+1);
	gets(mangSv[i].maSv );
	printf("Xin moi nhap ten cua SV thu %d:\n",i+1);
	gets(mangSv[i].tenSv);
	printf("Xin moi nhap nganh hoc cua sinh vien thu %d\n",i+1);
	gets(mangSv[i].nganh );
	printf("Xin moi nhap diem TB cua Sv thu %d ",i+1);
	scanf("%f",&mangSv[i].diemTrungBinh);
	}
	// Chay giai thuat sap xep sinh vien theo diem TB
	for ( i =0;i<n;i++) {
		for (j=i+1;j<n-1;j++) {
			if ( mangSv[i].diemTrungBinh < mangSv[j].diemTrungBinh ) {
				struct sinhVien svTemp; // tao ra 1 sinh vien tam
				mangSv[i] = svTemp;
				mangSv[i] = mangSv[j];
				mangSv[j] = svTemp;
			}
		}
	}
	// tim kiem sinh vien = mssv
	char mssv[10];
	printf("Xin moi nhap MSSV vao tu ban phim: ");
	gets(mssv);
	for ( i=0;i<n;i++) {
		if (mssv == MangSv[i].maSv) 
		{
			printf("Thong tin sinh vien thu %d la:\n ma SV =%s \ntenSV =%s \nNganh =%s \nDiemTB= %f \n",i+1,mangSv[i].maSv ,mangSv[i].tenSv ,mangSv[i].nganh ,mangSv[i].diemTrungBinh );
		}
	}
	return 0;
}
