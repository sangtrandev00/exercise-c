#include<stdio.h>
// bai code nay cua thay co gi do sai sai!!!

// phai lam lai bai nay, de dat duoc diem so cao hon.

int main(){
	
	float giaTriXe;
	float phamTramVay;
	float soTienVay;
	float laiSuatVay;
	int soNam;
	float soTienConLai;
	float laiPhaiTra;
	float soTienPhaiTra;
	
	printf("Nhap gia tri xe: ");
	scanf("%f",&giaTriXe);
	printf("So pham tram vay toi da: ");
	scanf("%f",&phamTramVay);
	printf("Nhap lai suat nam ");
	scanf("%f",&laiSuatVay);
	printf("Nhap so nam vay: ");
	scanf("%d",&soNam);
	
	laiSuatVay = laiSuatVay /100/12; // tinh lai suat vay 1 thang.
	int kyHan = soNam * 12; // ky han tinh bang thang.
	phamTramVay = phamTramVay / 100;
	printf("Pham tram vay la: %f\n",phamTramVay);
	soTienVay = giaTriXe * phamTramVay;
	printf("So tien vay: %.0f\n",soTienVay);
	const float gocPhaiTra = soTienVay / kyHan;
	soTienConLai = soTienVay;
	printf("So tien phai tra ban dau: %.0f\n",giaTriXe * (1 - phamTramVay));
	printf("--------------------So tien phai tra con lai theo ky han: -----------------\n");
	printf("Ky han\tLai phai tra\t\tGoc phai tra\t\tSo tien phai tra\t\tSo tien con lai\n");
	for(int i = 1;i<=kyHan;i++) {
		laiPhaiTra = laiSuatVay * soTienConLai;
		soTienPhaiTra = gocPhaiTra  + laiPhaiTra;
		soTienConLai = soTienConLai - gocPhaiTra;
		printf("%d\t%10.0f\t\t%10.0f\t\t%10.0f\t\t\t%10.0f\n",i,laiPhaiTra,gocPhaiTra,soTienPhaiTra,soTienConLai);
	}
	
	return 0;
}
