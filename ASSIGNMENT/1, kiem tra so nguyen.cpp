#include<stdio.h>
#include<string.h>
#include<math.h> 
// Ham kiem tra so nguyen 
int checkIntergerNumber(float a) {
	int flag=0;
	if(ceil(a)!=floor(a)) {
		flag=1;
	}
	return flag;
}
// Ham kiem tra so nguyen to
int checkSoNguyenTo(int n) {
	int check=0;
	for(int i=2;i<n;i++) {
		if(n%i==0) {
		check=1;
		}
	}
	return check;
}
// Ham kiem tra so chinh phuong ( co 2 cach de trinh bay ) -> Tim cach con lai de tinh cho chinh phuong.
int checkSoChinhPhuong(int m) {
	int dem2=0;
	for(int i=0;i<=m;i++) 
	{
		if(i*i==m) {
			dem2=1;
		}
	}
	return dem2;
}
// note: minh co the toi uu chuong trinh bang cach dat bien de doc hon.
int main() {
	// chuc nang so 1.
	// 1.1 kiem tra so nguyen.
	float x;
	printf("xin moi nhap vao 1 so: ");
	scanf("%f",&x);
	int kiemTraSoNguyen;
	kiemTraSoNguyen=checkIntergerNumber(x); 
	if(kiemTraSoNguyen == 0) printf("So vua nhap la so nguyen \n");
	else printf("So vua nhap khong la so nguyen");
	// 1.2 kiem tra so nguyen to.
	int kiemTraNguyenTo=checkSoNguyenTo(x);
	if(kiemTraNguyenTo==0) printf("So vua nhap la so nguyen to\n");
	// 1.3 Kiem tra so chinh phuong.
	int kiemTraSoChinhPhuong;
	kiemTraSoChinhPhuong=checkSoChinhPhuong(x);
	if(kiemTraSoChinhPhuong==1) printf("So vua nhap la so chinh phuong");
	return 0;
}
