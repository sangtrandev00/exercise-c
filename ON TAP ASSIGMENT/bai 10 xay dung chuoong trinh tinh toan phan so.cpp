#include<stdio.h>
#include<math.h>

typedef struct phanSo {
	float tuSo;
	float mauSo;	
}PS;

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

PS hienThi(PS so) {
	printf("%.0f",so.tuSo);
	printf("/");
	printf("%.0f",so.mauSo);
}

PS rutGon(PS so) {
	PS psRutGon;
	psRutGon.tuSo = so.tuSo/(ucln(so.tuSo,so.mauSo));
	psRutGon.mauSo = so.mauSo/(ucln(so.tuSo,so.mauSo));
	return psRutGon;
}

PS hienThiPhepTinh(PS so1, PS so2, char *phepTinh, PS ketQua) {
	hienThi(so1);
	printf(" %s ",phepTinh);
	hienThi(so2);
	printf(" = ");
	hienThi(ketQua);
	printf("\n");
}

PS tong(PS so1, PS so2) {
	PS tong;
	tong.tuSo = so1.tuSo * so2.mauSo + so2.tuSo * so1.mauSo;
	tong.mauSo = so1.mauSo * so2.mauSo;
	return tong;
}

PS hieu(PS so1, PS so2) {
	PS hieu;
	hieu.tuSo = so1.tuSo * so2.mauSo - so2.tuSo * so1.mauSo;
	hieu.mauSo = so1.mauSo * so2.mauSo;
	return hieu;
}

PS tich(PS so1, PS so2) {
	PS tich;
	tich.tuSo = so1.tuSo * so2.tuSo;
	tich.mauSo = so1.mauSo * so2.mauSo;
	return tich;
}

PS thuong(PS so1, PS so2) {
	PS thuong;
	thuong.tuSo = so1.tuSo * so2.mauSo;
	thuong.mauSo = so1.mauSo * so2.tuSo;
	return thuong;
}



int main(){
	PS ps1,ps2;
	
	printf("nhap vao tu so phan so 1: ");
	scanf("%f",&ps1.tuSo);
	printf("nhap vao mau so phan so 2: ");
	scanf("%f",&ps1.mauSo);
	printf("nhap vao tu so phan so 1: ");
	scanf("%f",&ps2.tuSo);
	printf("nhap vao mau so phan so 2: ");
	scanf("%f",&ps2.mauSo);
	
	printf("\nRut gon phan so 1: ");
	hienThi(rutGon(ps1));
	printf("\nRut gon phan so 2: ");
	hienThi(rutGon(ps2));
	
	// tong
	printf("\nTong 2 phan so: ");
	hienThiPhepTinh(ps1,ps2,"+",rutGon(tong(ps1,ps2)));
	
	// hieu
	printf("\nHieu 2 phan so: ");
	hienThiPhepTinh(ps1,ps2,"-",rutGon(hieu(ps1,ps2)));
	
	// tich
	printf("\nTich 2 phan so: ");
	hienThiPhepTinh(ps1,ps2,"*",rutGon(tich(ps1,ps2)));
	
	// thuong
	printf("\nThuong 2 phan so: ");
	hienThiPhepTinh(ps1,ps2,"/",rutGon(thuong(ps1,ps2)));
	
	return 0;
}
