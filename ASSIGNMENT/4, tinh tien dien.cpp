#include<stdio.h>
#include<math.h>
#include<string.h>
// tinh tien dien
int tinhTienDien(double soDien) {
	double giaTienDien;
	if(soDien>=0&&soDien<=50) giaTienDien=soDien*1.678;
	if(soDien>=51&&soDien<=100) giaTienDien=soDien*1.734;
	if(soDien>=101&&soDien<=200) giaTienDien=soDien*2.014;
	if(soDien>=201&&soDien<=300) giaTienDien=soDien*2.536;
	if(soDien>=301&&soDien<=400) giaTienDien=soDien*2.834;
	if(soDien>=401) giaTienDien=soDien*2.927;
	return giaTienDien;
	}
int main() {
	double kwdien;
	double giaTien;
	printf("Xin moi nhap vao so kw: ");
	scanf("%lf",&kwdien);
	giaTien=tinhTienDien(kwdien);
	printf("Gia tien dien tong la: %lf dong",giaTien);
	return 0;
}
