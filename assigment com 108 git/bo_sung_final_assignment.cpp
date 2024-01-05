#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>
#include<time.h>
#include<stdbool.h>

#define bac1 1678
#define bac2 1734
#define bac3 2014
#define bac4 2536
#define bac5 2834
#define bac6 2927

#define vayCoDinh 500000000

#define karaMoney 150000

bool isInteger(float x) {
	if(x == int(x)) {
		return 1;
	} else {
		return 0;
	}
}

bool isPrime(float x) {
	if(isInteger(x) && x > 1) {
		int kiemTra = 1;
		int i = 2;
		
		while(i<=sqrt(x)) {
			if((int)x%i==0) {
				kiemTra = 0;
				break;
			}
			i++;
		}
		
		if(kiemTra ==1) {
			return 1;
		} else {
			return 0;
		}			
	} else {
		return 0;
	}
}

bool isSquare(float x) {
	if(isInteger(x) && x > 1 && sqrt(x) == (int)sqrt(x)) {
		return 1;
	} else {
		return 0;
	}
}

void chucNang1() {
	float x;
	printf("Xin moi nhap vao mot gia tri cua x: ");
	scanf("%f",&x);
	
	//check integer
	if(isInteger(x)) {
		printf("%.2f la so nguyen!\n",x);
	}
	else {
		printf("%.2f khong phai la so nguyen!\n",x);
	}
	
	//check prime
	if(isPrime(x)) {
		printf("%.2f la so nguyen to!\n",x);
	} else {
		printf("%.2f khong phai la so nguyen to!\n",x);
	}
	
	//check square
	if(isSquare(x)) {
		printf("%.2f la so chinh phuong!\n",x);
	} else {
		printf("%.2f khong phai la so chinh phuong!\n",x);
	}
	
}
// finish chuc nang 1

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

int bcnn(int a,int b) {
    int c=a*b/ucln(a,b); // day la cong thuc tinh boi chung nho nhat khi tim thay uoc chung lon nhat.
    return c;
}

void chucNang2() {
		int x, y;
		NhapLai: // label
		printf("Nhap x: ");
		scanf("%d",&x);	
		printf("Nhap y: ");
		scanf("%d",&y);
//		int so1 = x, so2 = y;
		if(x==0 && y==0) {
			printf("Du lieu nhap khong hop le, moi nhap lai!\n");
			goto NhapLai;
		}
		int gcd = ucln(x,y);
		int lmc = bcnn(x,y);
		printf("Uoc chung lon nhat cua %d va %d la: %d\n",x,y,gcd);
		printf("Boi chung nho nhat cua %d va %d la: %d\n",x,y,lmc);
}
// finish chuc nang 2.

void nhapGio(float &startHour, float &endHour) {
	int flag = 0;
	do {
		printf("Xin moi nhap vao gio bat dau va gio ket thuc: ");
        scanf("%f%f",&startHour,&endHour);
        flag = startHour > endHour || startHour < 12 || startHour > 23 || endHour < 12 || endHour > 23;
        if(flag!=0) {
        	printf("Ban nhap gio khong chinh xac, moi nhap lai: \n");
		}
	} while(flag!=0);
}

float checkOut(float startHour, float endHour) {
     // Tinh tien thi co the tra ve kieu du lieu la float.
    float count = endHour - startHour;
    float soTien=0;
    
        if(count <= 3)
        {
            soTien=count*karaMoney;
            }
        else {
            soTien=3*karaMoney + (count - 3)*karaMoney*0.7;
        }
    
    if(startHour>=14 && startHour<=17) {
        soTien=soTien*0.9;
    }
    
    return soTien;
}

int chucNang3() {
    float startHour,endHour;
    float tinhTien=0;
	nhapGio(startHour,endHour);
    tinhTien=checkOut(startHour,endHour);
    printf("Gia tien cua ban la: %.0f dong\n",tinhTien);
}
// finished chuc nang 3

void chucNang4() {
	double sodien;
	double sotien;
	do 
	{
		printf("Moi nhap vao so kwh dien: ");
		scanf("%lf",&sodien);
		if(sodien<=0) {
			printf("So dien nhap khong chinh xac moi nhap lai!\n");
		}
	} while(sodien<=0);
	
	if(sodien<=50) {
		sotien = sodien * bac1;
	} 
	else if(sodien<=100) {
		sotien = bac1*50 +(sodien - 50) * bac2;
	}else if(sodien<=200) {
		sotien = (bac1 + bac2) * 50 + (sodien - 100) * bac3;
	}
	else if(sodien<=300) {
		sotien = (bac1+bac2) * 50 + bac3*100 + (sodien - 200) * bac4;
	}
	else if(sodien<=400) {
		sotien = (bac1+bac2)*50 + (bac3+bac4)*100 + (sodien - 300) * bac5;
	}
	else {
		sotien = (bac1 + bac2)*50 + (bac3+bac4+bac5)*100 + (sodien - 400)*bac6;
 	}
 	
	printf("Voi %.2f kwh su dung => so tien dien gia dinh phai dong la: %.2f VND\n",sodien,sotien);
}

// finish chuc nang 4.

void chucNang5() {
		int sotien;
	NhapLai:
		printf("Nhap vao menh gia tien can doi ( 500, 200, 100, 50, 20, 10, 5, 2, 1): ");
		scanf("%d",&sotien);
		
		switch(sotien) {
			case 500:
			case 200:
			case 100:
			case 50:
			case 20:
			case 10:
			case 5:
			case 2:
			case 1:
				goto TiepTuc;
			default:
				printf("menh gia nhap khong chinh xac!\n");
				goto NhapLai;
		}
		
		TiepTuc:
			int MG[] = {500,200,100,50,20,10,5,2,1};
			int vt;
			
			for(int i = 0;i<9;i++) {
				if(sotien == MG[i]) {
					vt = i;
					break;
				}
			}
			
			int soto;
			for(int j = vt;j<9 && sotien!=0 ;j++) {
				if(sotien ==1) {
					printf("%d la menh gia nho nhat khong the doi",sotien);
					break;
				}
				
				soto = sotien/MG[j+1];
				
				if(soto>0) {
					printf("%d to menh gia %d\n",soto,MG[j+1]);
				}
				
				sotien = sotien%MG[j+1];
			}
	}	

// finish chuc nang 5


void chucNang6() {
	float soTienVay, laiSuat;
	int kyHan;
	float tienConLai;
	float laiPhaiTra;
	float tienPhaiTra;
	printf("Nhap so tien vay: ");
	scanf("%f",&soTienVay);
	printf("Nhap ky han vay: ");
	scanf("%d",&kyHan);
	nhapLai:
	printf("Nhap lai suat vay ( pham tram ):");
	scanf("%f",&laiSuat);
	if(laiSuat<0 || laiSuat > 100) {
		printf("Ban nhap lai suat khong chinh xac, moi nhap lai:\n");
		goto nhapLai;
	}
	
	laiSuat = laiSuat/100;
	tienConLai = soTienVay;
	// tien goc phai tra moi thang
	const float tienGoc = soTienVay / kyHan; 
	int i = 1;
	printf("=============================KHOANG TIEN PHAI TRA MOI THANG=======================================\n");
	printf("Ky Han\tLai Phai Tra\t\tTien Goc \t\tTien Phai Tra\t\tTien Con Lai\n");
	while(i<=kyHan) {
		laiPhaiTra = laiSuat * tienConLai;
		tienPhaiTra = laiPhaiTra + tienGoc; 
		tienConLai = tienConLai - tienGoc;
		printf("%d\t%-10.0f\t\t%-10.0f\t\t%-10.0f\t\t%-10.0f\n",i,laiPhaiTra,tienGoc,tienPhaiTra,tienConLai);
		
		i++;
	}
}

//finished chuc nang 6

void chucNang7(){
	int nam = 0;
	double giaTriXe;
	double phamTramVay;
	double soTienVay;
	double laiSuatVay;
	int soNam;
	double soTienConLai;
	double laiPhaiTra;
	double soTienPhaiTra;
	
	printf("Nhap gia tri xe: ");
	scanf("%lf",&giaTriXe);
	printf("So pham tram vay toi da ( pham tram): ");
	scanf("%lf",&phamTramVay);
	printf("Nhap lai suat nam ( pham tram): ");
	scanf("%lf",&laiSuatVay);
	printf("Nhap so nam vay: ");
	scanf("%d",&soNam);
	
	laiSuatVay = laiSuatVay /100/12; // tinh lai suat vay 1 thang.
	int kyHan = soNam * 12; // ky han tinh bang thang.
	phamTramVay = phamTramVay / 100;
	soTienVay = giaTriXe * phamTramVay;
	const double gocPhaiTra = soTienVay / kyHan;
	soTienConLai = soTienVay;
	double	phanTramBanDau = 1 - phamTramVay;
	printf("**********************************So tien phai tra ban dau: %.2lf VND******************************************\n",giaTriXe * phanTramBanDau);
	printf("--------------------------------So tien phai tra con lai theo ky han %d la: -------------------------------\n",kyHan);
	printf("Ky han\tLai phai tra(1 thang)\tGoc phai tra(1 thang)\tSo tien phai tra(1 thang)\tSo tien con lai(1 thang)\n");
	for(int i = 1;i<=kyHan;i++) {
		laiPhaiTra = laiSuatVay * soTienConLai;
		soTienPhaiTra = gocPhaiTra  + laiPhaiTra;
		soTienConLai = soTienConLai - gocPhaiTra;
		printf("%d\t%-10.2lf\t\t%-10.2lf\t\t%-10.2lf\t\t\t%-10.2lf\n",i,laiPhaiTra,gocPhaiTra,soTienPhaiTra,soTienConLai);
		if(i % 12 ==0 ) {
			nam ++;
			printf("=========================================== KET THUC NAM %d ==========================================\n",nam);
		}
	}
}
// finished chuc nang 7

typedef struct SinhVien {
	char hoTen[100];
	float diem;
	char hocLuc[15];
}SV;

void nhapSinhVien(SV arrSv[], int *n) {
	for(int i = 0;i<*n;i++) {
		printf("Moi nhap vao sinh vien thu %d\n",i+1);
		fflush(stdin);
		printf("Ho ten: ");
		//fgets(arrSv[i].hoTen,sizeof(arrSv[i].hoTen),stdin);
		gets(arrSv[i].hoTen);
		nhapLaiDiem:
		printf("Diem: ");
		scanf("%f",&arrSv[i].diem);
		if(arrSv[i].diem<0 || arrSv[i].diem>10) {
			printf("Ban nhap diem khong chinh xac, moi nhap lai: \n");
			goto nhapLaiDiem;
		}
		fflush(stdin);
		
		if(arrSv[i].diem>=9) {
				strcpy(arrSv[i].hocLuc,"Xuat Sac");
			} else if(arrSv[i].diem>=8) {
				strcpy(arrSv[i].hocLuc,"Gioi");
			} else if(arrSv[i].diem >=6.5) {
				strcpy(arrSv[i].hocLuc,"Kha");
			} else if(arrSv[i].diem >=5) {
				strcpy(arrSv[i].hocLuc,"Trung Binh");
			} else {
				strcpy(arrSv[i].hocLuc,"Yeu");
			}				
	}
}

void sapXepSV(SV arrSv[],int n) {
	for(int i =0;i<n-1;i++) {
		for(int j =i+1;j<n;j++) {
			if(arrSv[i].diem < arrSv[j].diem) {
				SV temp;
				temp = arrSv[i];
				arrSv[i] = arrSv[j];
				arrSv[j] = temp;
			}
		}
	}
}

void xuatSinhVien(SV arrSv[], int n) {
	printf("STT\tTen sinh vien\t\t\tDiem trung binh\t\tHoc Luc\n");
	for(int i = 0;i<n;i++) {
		printf("%d\t%-30s\t%-8.2f\t\t%-15s\n",i+1,arrSv[i].hoTen,arrSv[i].diem,arrSv[i].hocLuc);
	}
}

void chucNang8() {
	SV arrSv[100];
	int n;
	printf("Xin moi nhap vao so luong sinh vien: ");
	scanf("%d",&n);
	nhapSinhVien(arrSv,&n);
	printf("\n==========================Sinh vien truoc khi sap xep==========================\n");
	xuatSinhVien(arrSv,n);
	sapXepSV(arrSv,n);
	printf("\n====================Sinh vien sau khi sap xep theo diem so la:=============\n");
	xuatSinhVien(arrSv,n);	
}


// finish chuc nang 8

void nhapSo(int*a,int*b) {
    int flag = 0;
    do
    {
        printf("Nhap 2 so ( trong khoang 1 den 15): ");
        scanf("%d%d",a,b);

        flag = * a<1 || * a>15 || *b<1|| *b>15;
        if(flag != 0 ) {
            printf("Ban nhap sai so. Vui long nhap lai \n");
        }
    } while (flag !=0);
}

void soXo(int a,int b) {
    int rand1,rand2;
    srand((int) time(0)); // Cho phép kh?i t?o giá tr? ban d?u sinh ra ng?u nhiên.
    rand1=1+rand()%15; // bi?n rand1 du?c sinh ra ng?u nhiên t? 1 -> 15.
    rand2=1+rand()%15;
    printf("So duoc sinh ra: so 1: %d ---- so 2: %d\n",rand1,rand2);

    if((a==rand1&&b==rand2)||(a==rand2&&b==rand1)) {
        printf("Chuc mung ban da trung giai nhat \n");
    } else if(a==rand1||a==rand2||b==rand1||b==rand2) {
        printf("Chuc mung ban da trung giai nhi\n");
    } else {
        printf("chuc ban may man lan sau\n");
    }
}

int chucNang9() {
    int a,b;
    nhapSo(&a,&b);
    soXo(a,b);
}
// finished chuc nang 9

typedef struct phanSo {
    float tu;
    float mau;
}phanSo;

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

void menu() {
	int choose = 0;
	
	do {
		system("cls");
		printf("\t\t\t\t**************************MENU***************************\n");
		printf("\t\t\t\t* 1: Kiem tra so nguyen to, so chinh phuong             *\n");
		printf("\t\t\t\t* 2: Tim uoc so chung va boi so chung cua 2 so          *\n");
		printf("\t\t\t\t* 3: Chuong trinh tinh tien cho quan karaoke            *\n");
		printf("\t\t\t\t* 4: Tinh tien dien                                     *\n");
		printf("\t\t\t\t* 5: Chuc nang doi tien                                 *\n");
		printf("\t\t\t\t* 6: Chuc nang tinh lai suat vay ngan hang vay tra gop: *\n");
		printf("\t\t\t\t* 7: Xay dung chuong trinh vay tien mua xe              *\n");
		printf("\t\t\t\t* 8: Sap xep thong tin sinh vien                        *\n");
		printf("\t\t\t\t* 9: Game FPOLY - LOTT                                  *\n");
		printf("\t\t\t\t* 10: Tinh toan phan so                                 *\n");
		printf("\t\t\t\t* Nhan phim bat ky de thoat chuong trinh:               *\n");
		printf("\t\t\t\t*********************************************************\n");
		printf("\t\t\t\t*        Xin moi nhap chuc nang can thuc hien:          *\n");
		scanf("%d",&choose);
		
		switch(choose) {
			case 1:
				chucNang1();
				break;
			case 2:
				chucNang2();
				break;
			case 3:
				chucNang3(); 
				break;
			case 4:
				chucNang4();
				break;
			case 5:
				chucNang5();
				break;
			case 6:
				chucNang6();
			
				break;
			case 7:
				chucNang7();
				break;
			case 8:
				chucNang8();
				break;
			case 9:
				chucNang9();
				break;
			case 10:
				chucNang10();
				break;
			default: 
				exit(0);
		}
		if(choose !=0) {
			printf("Nhan phim enter de tiep tuc: ");
			fflush(stdin);
			getchar();
		}
		
	} while(choose!=0);
}

int main() {
	menu();
	return 0;
}
