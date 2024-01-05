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

//void chucNang5() {
//	int menhGia[] = {500,200,100,50,20,10,5,2,1};
//	int soTo[9] = {0};
//	int soTien;
//	NhapLai:
//	printf("xin moi nhap vao so tien can doi: ");
//	scanf("%d",&soTien);
//	int i = 0;
//	printf("Cac menh gia tien sau khi doi %d la: \n",soTien);
//	while(i<9) {
//		if(soTien > menhGia[i]) {		
//			soTo[i] = soTien / menhGia[i];
//			soTien = soTien % menhGia[i];
//			printf("%d to menh gia %d\n",soTo[i],menhGia[i]);
//			break;
//		}
//		i++;
//	}
//	
//	while(i<9 && soTien >0) {
//		if(soTien >= menhGia[i]) {
//			soTo[i] = soTien / menhGia[i];
//			soTien = soTien % menhGia[i];
//			printf("%d to menh gia %d\n",soTo[i],menhGia[i]);
//		}
//		i++;
//	}
//
//}

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
				//chucNang7();
				break;
			case 8:
				//chucNang8();
				break;
			case 9:
				//chucNang9();
				break;
			case 10:
				//chucNang10();
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
