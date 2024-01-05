#include<stdio.h>
void tinhTienVay(float soTien) {
	float traGoc=soTien/12;
	printf("Ky han\tLai phai tra\tGoc phai tra\tSo tien phai tra\tSo tien con lai\n");
	for(int i=1;i<=12;i++) {
		float traLai=soTien*0.05;
		float tongPhaiTra=traGoc+traLai; 
		soTien=soTien-traGoc;
		printf("%d\t%.2f\t%.2f\t%.2f\t\t%.2f\n",i,traLai,traGoc,tongPhaiTra,soTien);
	}
}
int main() { 
	float soTien;
	printf("Nhap so tien can vay: ");
	scanf("%f",&soTien);
	tinhTienVay(soTien);
	return 0;
}

// nen lam lai bai tap nay.
