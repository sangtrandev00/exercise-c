#include<stdio.h> 
#include<string.h>
// Bai 1 : Xay dung chuong trinh luu thong sinh vien.
	int i,n;
	struct sinhVien {
	char mssv[50];
	char ten[50];
	char nganh[50];
	float diemTrungBinh;
}mangSv[50];
void xuatSv() {
		for ( i=0;i<n;i++) {
		printf("MSSV: %s \n",mangSv[i].mssv );
		printf("ten sinh vien: %s\n",mangSv[i].ten );
		printf("Nganh sinh vien: %s\n",mangSv[i].nganh );
		printf("Diem trung binh: %f\n",mangSv[i].diemTrungBinh );
	}
}
int main() {
	
	printf("Xin moi nhap so sinh vien:  ");
	scanf("%d",&n);
	for (i=0;i<n;i++)
	{
		printf("Xin moi nhap MSSV thu %d: ",i+1);
		scanf("%s",&mangSv[i].mssv );
		printf("Xin moi nhap ten sinh vien: thu %d: ",i+1);
		scanf("%s",&mangSv[i].ten );
		printf("Xin moi nhap nganh cua sinh vien: thu %d:  ",i+1);
		scanf("%s",&mangSv[i].nganh );
		printf("Xin moi nhap diem trung binh: thu %d: ",i+1);
		scanf("%f",&mangSv[i].diemTrungBinh );
	}
	printf("-----------------------------\n Xuat ra thong tin sinh vien:\n");
	/*for ( i=0;i<n;i++) {
		printf("MSSV: %s \n",mangSv[i].mssv );
		printf("ten sinh vien: %s\n",mangSv[i].ten );
		printf("Nganh sinh vien: %s\n",mangSv[i].nganh );
		printf("Diem trung binh: %f\n",mangSv[i].diemTrungBinh );
	}*/
	xuatSv(); // Su dung ham de toi uu hoa chuong trinh
	// Sap xep sinh vien theo diem tang dan.
	printf("-------------------------------------------------\n");
	printf("Danh sach sinh vien sau khi sap xep theo thu tu diem la:\n");
	for ( i=0;i<n-1;i++) {
		for (int j=i+1;j<n;j++) {
			struct sinhVien temp;
			if(mangSv[i].diemTrungBinh > mangSv[j].diemTrungBinh ) {
				temp=mangSv[i];
				mangSv[i]=mangSv[j];
				mangSv[j]= temp;
		}
		}
		} // ham bubble sort, sap xep theo thu tu tang dan.
	xuatSv();
	return 0;
}
