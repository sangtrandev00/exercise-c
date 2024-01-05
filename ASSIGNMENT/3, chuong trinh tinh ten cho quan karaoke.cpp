#include<stdio.h>
#include<math.h>
#include<string.h>
int main() {
	double x,y;
	double soTien;
	printf("Xin moi nhap vao gio bat dau va gio ket thuc: \n");
	scanf("%lf%lf",&x,&y);
	while(x>=12&&x<=23&&y>=12&&y<=23) {
		if(y-x<=3)
		{
			soTien=50000*3;
			break;
		}
		else {
			soTien=50000*(y-x)*0.7+50000*3;
			break;
		}
	}
	if(x>=14&&x<=17) soTien*=0.9;
	printf("Tong so tien la: %lf dong",soTien);
	return 0;
}
