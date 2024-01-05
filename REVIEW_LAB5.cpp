#include <stdio.h>
// Viet chuong trinh co dung ham tim trung binh cua 5 so thuc duoc nhap vao tu ban phim
float Average5(){
	float average;
	float a,b,c,d,e,f;
	printf("Xin moi nhap 5 so thuc vao ban phim: ");
	scanf("%f%f%f%f%f",&a,&b,&c,&d,&e);
	average = ( a + b + c + d + e ) /5;
	return average;
}
int main() {
	double trungBinh;
	trungBinh= Average5();
	printf("Gia tri trung binh cua 5 so nay la: %lf",trungBinh);
	return 0;
}
	
