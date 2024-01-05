#include<stdio.h>

int main(){
	double phanTramVay;
	double soTienXe;
	printf("So tien xe muon vay: ");
	scanf("%lf",&soTienXe);
	printf("Nhap vao pham tram vay toi da: ");
	scanf("%lf",&phanTramVay);
	
	double tienLanDau = (1- phanTramVay/100)*soTienXe;
	double tienConLai = soTienXe - tienLanDau;
	int kyHan;
	printf("Xin moi nhap vao so nam: ");
	scanf("%d",&kyHan);
	kyHan *=12;
	double laiSuat;
	printf("Nhap lai suat nam: ");
	scanf("%lf",&laiSuat);
	laiSuat = laiSuat/100/12;
	const double tienGoc = tienConLai/kyHan;
	printf("So tien lan dau phai tra la: %.2lf\n",tienLanDau);
	printf("Ky Han\tLai phai Tra(1 thang)\tGoc Phai Tra(1 thang)\tTien Phai Tra(1 thang)\tTien Con Lai\n");
	int i = 1;
	while(i<=kyHan) {
		double laiPhaiTra = laiSuat * tienConLai;
		double tienPhaiTra = tienGoc + laiPhaiTra;
		tienConLai = tienConLai - tienGoc;
		printf("%-6d\t%-10.2lf\t\t%-10.2lf\t\t%-10.2lf\t\t%-10.2lf\n",i,laiPhaiTra,tienGoc,tienPhaiTra,tienConLai);
		i++;
	}
	return 0;
}
