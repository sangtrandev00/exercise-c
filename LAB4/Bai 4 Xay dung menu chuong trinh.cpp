#include<stdio.h>
#include<math.h>
#include<stdlib.h>

#define bac1 1678
#define bac2 1734
#define bac3 2014
#define bac4 2536
#define bac5 2834
#define bac6 2927

void chucNang1() {
	float diemSv;
	printf("Xin moi nhap vao diem cua SV: ");
	scanf("%f",&diemSv);
	if(diemSv>=0 && diemSv<=10) {
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
		printf("Ban nhap sai diem!");
	}

}

void chuongTrinhBac1() {
	double a,b;
	printf("xin moi nhap vao gia tri a: va b:\n");
	printf("moi nhap a:");
	scanf("%lf",&a);
	printf("moi nhap b:");
	scanf("%lf",&b);
	if(a==0) {
		if ( b==0) {
			printf("Phuong trinh vo so nghiem");
		} else {
			printf("Phuong trinh vo nghiem");
		}
		
	} else {
		printf("phuong trinh ax+b=0 co nghiem la %.2lf",-b/a);
	}
}

void chuongTrinhBac2() {
	double a,b,c;
	double delta;
	printf("xin moi nhap vao gia tri a: va b: c: de tinh nghiem cua phuong trinh bac 2\n");
	printf("moi nhap a:");
	scanf("%lf",&a);
	printf("moi nhap b:");
	scanf("%lf",&b);
	printf("moi nhap c:");
	scanf("%lf",&c);
	if(a==0) {
			if(b==0) {
		if ( c==0) {
			printf("Phuong trinh vo so nghiem\n");
		} else {
			printf("Phuong trinh vo nghiem\n");
		}
		
	} else {
		printf("phuong trinh ax+b=0 co nghiem la x=%lf",-c/b);
	}
	} else {
		delta= b*b - 4*a*c;
		if(delta<0) printf("Phuong trinh vo nghiem\n");
		else if (delta == 0) printf("Phuong trinh co nghiem kep x = %.2lf\n", -b/(2*a));
		else {
			printf("Phuong trinh co 2 nghiem rieng biet x1 =%.2lf, x2=%.2lf\n",(-b+sqrt(delta))/(2*a),(-b-sqrt(delta))/(2*a));
		}
	}
}

void chucNang2() {
	int choose;
	printf("Chon (1. Tinh chuong trinh bac nhat!) (2. Tinh phuong trinh bac 2): ");
	scanf("%d",&choose);
	switch(choose) {
		case 1: 
			chuongTrinhBac1();
			break;
		case 2:
			chuongTrinhBac2();
			break;
		default:
			printf("Ban chon khong dung!");
	} 
}
	
void chucNang3() {
	double sodien;
	double sotien;
	do 
	{
		printf("Moi nhap vao so kwh dien: ");
		scanf("%lf",&sodien);
		if(sodien<0) {
			printf("So dien nhap khong chinh xac moi nhap lai!\n");
		}
	} while(sodien<0);
	if(sodien<=50) {
		sotien = sodien * bac1;
		printf("So tien dien la: %.2lf\n",sotien);
	} 
	else if(sodien<=100) {
		sotien = bac1 *  50 + (sodien - 50 ) * bac2;
		printf("So tien dien la: %.2lf\n",sotien);
	}else if(sodien<=200) {
		sotien = bac1 * 50 + bac2 * 50 + (sodien - 100) * bac3;
		printf("So tien dien la: %.2lf\n",sotien);
	}
	else if(sodien<=300) {
		sotien = bac1 * 50 + bac2 * 50 + bac3 * 100 + ( sodien - 200) * bac4;
		printf("So tien dien la: %.2lf\n",sotien);
	}
	else if(sodien<=400) {
		sotien = bac1 * 50 + bac2 * 50 + bac3 * 100 + bac4 * 100 + ( sodien - 300) * bac5;
		printf("So tien dien la: %.2lf\n",sotien);
	}
	else {
		sotien = bac1 * 50 + bac2 * 50 + bac3 * 100 + bac4 * 100 + bac5 * 100 +(sodien - 400) * bac6;
		printf("So tien dien la: %.2f\n",sotien);
	}
}



int main() {

	int chucNang = 0;

	do {
//		system("cls");
		printf("\nXin moi ban nhap vao chuc nang muon thuc thi ( 1,2,3,4):\n");
		printf("Chuc nang 1: Tinh Hoc Luc\n");
		printf("Chuc nang 2: Giai phuong trinh bac nhat hoac phuong trinh bac 2\n");
		printf("Chuc nang 3: Tinh tien dien theo cap bac\n");
		printf("Chuc nang 4: Thoat\n");
		printf("Nhap chuc nang mong muon: ");
		scanf("%d",&chucNang);
		
		switch (chucNang) {
		case 1: 
			chucNang1();
			break;
		case 2:
			chucNang2();
			break;
		case 3:
			chucNang3();
			break;
		break;
		case 4: 
			exit(0);
		break;
		default:
			printf("Ban khong nhap vao dung chuc nang!\n");
	
		if(chucNang !=0) {
			printf("Xin moi nhap vao phim ( enter ) de tiep tuc");
			fflush(stdin);
			getchar();
			}
		}
	}
	while (chucNang !=0);
	
	return 0;
}
