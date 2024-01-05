#include<stdio.h>
int main(){
	float diemSv;
	printf("Xin moi nhap vao diem cua SV: ");
	scanf("%f",&diemSv);
	if(diemSv >=0 && diemSv<=10) {
		if(diemSv>=9) {
		printf("Hoc luc xuat sac");
	} else if (diemSv >=8 &&diemSv <=9) {
		printf("Hoc luc gioi");
	} else if (diemSv>=6.5&& diemSv<8) {
		printf("Hoc luc kha");
	} else if(diemSv >=5 && diemSv<6.5) {
		printf("Hoc luc trung binh");
	} else if (diemSv>=3.5 && diemSv<5) {\
	printf("Hoc luc yeu");
	} else {
		printf("Hoc luc kem");
	}
	} else {
		printf("Ban nhap khong dung so diem!!!");
	}
	return 0;
}
