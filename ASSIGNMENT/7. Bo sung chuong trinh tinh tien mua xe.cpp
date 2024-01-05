#include<stdio.h>
int main() {
	
	float soTienVay;
	int kyHan;
	float laiSuat;
	int phamTramVay;
	float tienLanDau;
	float tienConLai;
	float tienPhaiTra;
	float laiPhaiTra;
	
	printf("Xin moi nhap vao so tien vay: ");
	scanf("%f",&soTienVay);
	printf("Xin moi nhap vao so ky han vay: ");
	scanf("%d",&kyHan);
	printf("Xin moi nhap vao lai suat vay (\%): ");
	scanf("%f",&laiSuat);
	printf("Xin moi nhap vao phan tram vay toi da: ");
	scanf("%f",&phamTramVay);
	laiSuat = laiSuat/100;
	
	//tienLanDau = (1-phamTramVay/100)*soTienVay;
	printf("So tien lan dau phai tra la: %.0f\n",0(10*soTienVay);
	printf("--------------So tien hang thang phai tra la: ---------------------\n");
	printf("kyHan\tLai Phai Tra\tTien Goc phai Tra\tTien Phai Tra 1 thang\tTien Con Lai\n");
	tienConLai = soTienVay*0.8;
	const float tienGoc = soTienVay/kyHan;
	
	int i = 1;
	while(i<=kyHan) {
		laiPhaiTra = laiSuat * tienConLai;
		tienPhaiTra = laiPhaiTra + tienGoc;
		tienConLai = tienConLai - tienGoc;
		printf("%d\t%.0f\t\t%.0f\t\t%.0f\t\t\t%.0f\n",i,laiPhaiTra,tienGoc,tienPhaiTra,tienConLai);
		
		i++;
	}
	return 0;
}
