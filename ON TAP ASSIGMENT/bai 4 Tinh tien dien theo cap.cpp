#include<stdio.h>
#include<math.h>

const int bac1 = 1678;
const int bac2 = 1734;
const int bac3 = 2014;
const int bac4 = 2536;
const int bac5 = 2834;
const int bac6 = 2927;


int main(){
	int soKwh;
	printf("Nhap so kwh: ");
	scanf("%d",&soKwh);
	int giaTien;
	if(soKwh >=0 && soKwh <=50) {
		giaTien = bac1 * soKwh;
	}
	if(soKwh>=51 && soKwh<=100) {
		giaTien = bac1 * 50 + (soKwh - 50) * bac2;
	}	
	if(soKwh>=101 && soKwh<=200) {
		giaTien = bac1 * 50 + 50 * bac2 + (soKwh - 100)*bac3;
	}
	if(soKwh>=201 && soKwh<=300) {
		giaTien = bac1 * 50 + 50 * bac2 + bac3 * 100 + (soKwh - 200)*bac4;
	}
	if(soKwh>=301 && soKwh<=400) {
		giaTien = bac1 * 50 + 50 * bac2 + bac3 * 100 + bac4 * 100 + (soKwh - 300)*bac5;
	}
	if(soKwh >=401) {
		giaTien = bac1 * 50 + 50 * bac2 + bac3 * 100 + bac4 * 100 + bac5 * 100 + (soKwh - 400)*bac6;
	}
	
	printf("so tien dien khi su dung %d kwh la %d",soKwh,giaTien);
	
	return 0;
}
