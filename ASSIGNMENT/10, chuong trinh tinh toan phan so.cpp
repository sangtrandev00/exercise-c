#include<stdio.h>
#include<time.h>
#include<conio.h>
#include<stdlib.h>
// tich va thuong thoi. cong tru hai phan so thi chua lam
// Ben duoi la kieu khai bao ham kieu moi a.
typedef struct phanSo {
	float tu;
	float mau;
}phanSo;
// Tai sao co kieu khai bao ham kieu moi nhi.
phanSo nhan(phanSo so1, phanSo so2) {
	phanSo tich;
	tich.tu =so1.tu * so2.tu ;
	tich.mau = so1.mau * so2.mau ;
	return tich;
}

phanSo chia(phanSo so1, phanSo so2) {
	phanSo thuong;
	thuong.tu =so1.tu * so2.mau ;
	thuong.mau = so1.mau * so2.tu ;
	return thuong;
}
// Ham hien thi tu va mau cua mot phan so.
void nhapPhanSo(phanSo *so) {
	printf("Nhap tu va mau: ");
	scanf("%f%f",&(*so).tu,&(*so).mau);
}
void hienThi(phanSo so) {
	printf("%.2f/%.2f",so.tu,so.mau);
}
// Cho phep hien thi gia tri cua mot phan so, va cac phep tinh cua cac phan so.
void hienThiPhepToan(phanSo so1, phanSo so2, phanSo kq, char *toanTu) {
	printf("\n");
	hienThi(so1);
	printf("%s",toanTu);
	hienThi(so2);
	printf("=");
	hienThi(kq);
}
int main() {
	phanSo so1,so2;
	printf("Nhap phan so thu 1: \n");
	nhapPhanSo(&so1);
	printf("Nhap phan so thu 2: \n");
	nhapPhanSo(&so2);
	
	phanSo tich = nhan(so1,so2);
	printf("\nNhan hai phan so: \n");
	hienThiPhepToan(so1,so2,tich,"*");
	phanSo thuong = chia(so1,so2);
	printf("\nChia hai phan so: \n");
	hienThiPhepToan(so1,so2,thuong,"/");
	return 0;
}
