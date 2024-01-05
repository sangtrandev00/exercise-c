#include<stdio.h>

// xem lai bai nay sau!
int main(){
	float soTienVay, laiSuat;
	int kyHan;
	float tienConLai;
	float laiPhaiTra;
	float tienGoc;
	float tienPhaiTra;
	printf("Nhap so tien vay: ");
	scanf("%f",&soTienVay);
	printf("Nhap ky han vay: ");
	scanf("%d",&kyHan);
	printf("Nhap lai suat vay: ");
	scanf("%f",&laiSuat);
	
	laiSuat = laiSuat/100;
	tienConLai = soTienVay;
	// tien goc phai tra moi thang
	tienGoc = soTienVay / kyHan; 
	int i = 1;
	printf("======================================================================\n");
	printf("Ky Han\tLai Phai Tra\t\tTien Goc \t\tTien Phai Tra\t\tTien Con Lai\n");
	while(i<=kyHan) {
		
		laiPhaiTra = laiSuat * tienConLai;
		tienPhaiTra = laiPhaiTra + tienGoc; 
		tienConLai = tienConLai - tienGoc;
		printf("%d\t%-10.0f\t\t%-10.0f\t\t%-10.0f\t\t%-10.0f\n",i,laiPhaiTra,tienGoc,tienPhaiTra,tienConLai);
		
		i++;
	}
	return 0;
}
