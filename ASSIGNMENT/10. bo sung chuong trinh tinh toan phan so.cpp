#include<stdio.h>
#include<math.h>

int ucln (int a,int b) {
	a = abs(a);
	b = abs(b);
	if(a==0||b==0) {
		return a+b;
	}
    while (a!=b)
    {
        if(a>b) a=a-b;
        else b=b-a;
    }
    return a; // a==b;
}

typedef struct phanSo {
    float tu;
    float mau;
}phanSo;
// khai báo ki?u c?u trúc. V?i t? khóa typedef.
phanSo nhan(phanSo so1, phanSo so2) {
    phanSo tich;
    tich.tu=so1.tu*so2.tu;
    tich.mau=so1.mau*so2.mau;
    return tich;
}

phanSo chia (phanSo so1, phanSo so2) {
    phanSo thuong;
    thuong.tu=so1.tu*so2.mau;
    thuong.mau=so1.mau*so2.tu;
    return thuong;
}

phanSo cong(phanSo so1,phanSo so2) {
	phanSo cong;
	cong.tu = so1.tu * so2.mau + so1.mau*so2.tu;
	cong.mau = so1.mau * so2.mau;
	return cong;
}

phanSo tru(phanSo so1,phanSo so2) {
	phanSo tru;
	tru.tu = so1.tu * so2.mau - so1.mau*so2.tu;
	tru.mau = so1.mau * so2.mau;
	return tru;
}

phanSo rutGon(phanSo so1) {
	phanSo rutGon;
	rutGon.tu = (so1.tu)/ucln(so1.tu,so1.mau);
	rutGon.mau = (so1.mau)/ucln(so1.tu,so1.mau);
	return rutGon;
}

void nhapPhanSo(phanSo *so) {
    printf("Nhap tu so: ");
    scanf("%f",&(*so).tu);
    nhapLai:
    printf("Nhap mau so: ");
    scanf("%f",&(*so).mau);
    if((*so).mau == 0) {
    	printf("Ban nhap mau so khong hop le!");
    	goto nhapLai;
	}
    //scanf("%f%f",&(*so).tu,&(*so).mau);
}

void hienThi(phanSo so) {
    printf("%.2f/%.2f",so.tu,so.mau);
}

void hienThiPhepToan(phanSo so1, phanSo so2, phanSo kq, char *toanTu) {
    printf("\n");
    hienThi(so1);
    printf("%s",toanTu);
    hienThi(so2);
    printf("=");
    hienThi(kq);
}

void chucNang10() {
    phanSo so1,so2;
    printf("Nhap phan so thu 1: \n");
    nhapPhanSo(&so1);
    printf("Nhap phan so thu 2: \n");
    nhapPhanSo(&so2);
    so1 = rutGon(so1);
    so2 = rutGon(so2);
    printf("Phan so 1 sau khi rut gon la: ");
    hienThi(so1);
    printf("\nPhan so 2 sau khi rut gon la: ");
    hienThi(so2);
    // 1.phep nhan ( x )
    printf("\n Nhan hai phan so:");
    phanSo tich = nhan(so1,so2);
    hienThiPhepToan(so1,so2,rutGon(tich),"*");
   
     // 2. phep chia ( / )
     printf("\nChia hai phan so:");
    phanSo thuong = chia(so1,so2);
     hienThiPhepToan(so1,so2,rutGon(thuong),"/");
     // 3. phep cong( + )
     printf("\n Cong hai phan so:");
     phanSo tong = cong(so1,so2);
     hienThiPhepToan(so1,so2,rutGon(tong),"+");
     // 4. Phep tru (-)
    phanSo hieu = tru(so1,so2);
     printf("\n Tru hai phan so:");
     hienThiPhepToan(so1,so2,rutGon(hieu),"-");
}

int main(){
	chucNang10();
	return 0;
}
