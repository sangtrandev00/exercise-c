#include<stdio.h>
#include<string.h>
	struct sinhVien{
		char maSv[50];
		char tenSv[50];
		char nganh[50];
		float diemTrungBinh;
	};
int main() 	{
	struct sinhVien mangSv[50]; // Khai bao mang Sinh Vien
	// nhap thong tin sinh vien vao mang
	int i,n;
	printf("So sinh vien can nhap la: ");
	scanf("%d",&n);
	for(i=0;i<n;i++) 
	{
	printf("Xin vien thu %d\n",i+1);
	fflush(stdin);
	printf("ma sinh vien: ");
	gets(mangSv[i].maSv);
	printf("ten cua SV: ");
	gets(mangSv[i].tenSv);
	printf("Xin moi nhap nganh hoc: ");
	gets(mangSv[i].nganh );
	reEnterGrade:
	printf("Xin moi nhap diem TB ");
	scanf("%f",&mangSv[i].diemTrungBinh);
	if(mangSv[i].diemTrungBinh<0||mangSv[i].diemTrungBinh>10) {
		printf("Ban nhap sai diem trung binh, moi nhap lai: \n");
		goto reEnterGrade;
		}
	}
	
	printf("\n---------------------------------------\n");
	for (i=0;i<n;i++)
	printf("Thong tin sinh vien thu %d la:\nma SV =%s \ntenSV =%s \nNganh =%s \nDiemTB= %.2f \n",i+1,mangSv[i].maSv ,mangSv[i].tenSv ,mangSv[i].nganh ,mangSv[i].diemTrungBinh );
	
	return 0;
}
