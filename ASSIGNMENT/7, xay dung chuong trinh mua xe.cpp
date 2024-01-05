#include<stdio.h>
	void tienVayXe(float phanTram) {
		float tienLanDau=500000000*(100-phanTram)/100;
		printf("So tien tra lan dau la: %.0f dong\n",tienLanDau);
		float soTien=phanTram*500000000/100;
		float traGoc= soTien/24;
		printf("Ky han\tLai phai tra \tGoc phai tra\tSo tien phai tra\tSo tien con lai\n");
		for(int i=1;i<=24;i++) {
		float traLai=soTien*0.072;
		float tongPhaiTra=traGoc+traLai; 
		soTien=soTien-traGoc;
		printf("%d\t%.2f\t%.2f\t%.2f\t\t%.2f\n",i,traLai,traGoc,tongPhaiTra,soTien);
	}
	}
	int main() { 
	float phanTram;
	printf("Nhap so phan tram vay toi da: ");
	scanf("%f",&phanTram);
	tienVayXe(phanTram);
	return 0;
	}
