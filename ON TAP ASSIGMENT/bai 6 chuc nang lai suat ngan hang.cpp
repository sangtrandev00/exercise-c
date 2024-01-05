#include<stdio.h>
#include<math.h>

int main(){
	double soTienVay;
	double laiSuatThang;
	int kyHan;
	double laiPhaiTra;
	double tienPhaiTra;
	
	printf("Nhap vao so tien muon vay: ");
	scanf("%lf",&soTienVay);
	
	printf("Lai suat co dinh thang: ");
	scanf("%lf",&laiSuatThang);
	laiSuatThang /=100;
	
	printf("So ky han: ");
	scanf("%d",&kyHan);
	
	const double tienGocThang = soTienVay/kyHan;
	double tienConLai = soTienVay;
	
	printf("ky Han\tLai Phai tra(1 thang)\tGoc Phai Tra(1 thang)\tTien Phai Tra(1 thang)\tTien Con Lai(1 thang)\n");
	for(int i = 1;i<=kyHan;i++) {
		laiPhaiTra = laiSuatThang * tienConLai;
		tienPhaiTra = tienGocThang + laiPhaiTra;
		tienConLai = tienConLai - tienGocThang;
		printf("%-6d\t%-10.0f\t\t%-10.0f\t\t%-10.0f\t\t%-10.0f\n",i,laiPhaiTra,tienGocThang,tienPhaiTra,tienConLai);
	}
	
	return 0;
}
