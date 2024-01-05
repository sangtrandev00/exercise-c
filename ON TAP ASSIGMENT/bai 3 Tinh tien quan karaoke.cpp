#include<stdio.h>


// tinh tien cho quan karaoke.
//void nhapGio(float &startHour,float &endHour) {
//
//}

float tinhTienKara(float startHour, float endHour) {
	int count = endHour - startHour;
	int giaTien = 0;
	if(count <= 3) {
		giaTien =150000 * 3;
	} else {
		giaTien = 150000*3 + (count - 3)*150000*0.7;
	}
	if(startHour >= 14 && startHour <=17) {
		giaTien *=0.9;
	}
	return giaTien;
}


int main(){
	float startHour, endHour;
	nhapGio:
	printf("Xin moi nhap va gio bat dau: ");
	scanf("%f",&startHour);
	printf("Xin moi nhap vao gio ket thuc: ");
	scanf("%f",&endHour);
	
	int flag = 0;
	
	flag = startHour<12 || startHour>23 || endHour < 12 || endHour > 23 || startHour > endHour;
	if(flag !=0) {
		printf("Ban nhap gio khong chinh xac moi nhap lai: ");
		goto nhapGio;
	}
	
	printf("gia tien karaoke cua ban la: %.0f",tinhTienKara(startHour,endHour));
	
	return 0;
}
