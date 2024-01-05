#include<stdio.h>
#include<math.h>
#include<ctype.h>
#include<stdlib.h>
#include<string.h>
void trungBinhCong() {
	float min,max;
	int dem = 0;
	int sum = 0;
	
	printf("Nhap vao min: ");
	scanf("%f",&min);
	printf("Nhap vao max: ");
	scanf("%f",&max);
	
	int i =ceil(min);
	while(i<=floor(max)) {
		if(i%2==0) {
			sum+=i;
			dem++;
		}
		i++;
	}
	printf("Trung binh cua cac so tu %.2f den %.2f chia het cho 2 la: %.2f",min,max,(float)sum/(float)dem);
}

void soNguyenTo() {
	float x; 
	printf("Xin moi nhap vao mot so x = ");
	scanf("%f",&x);
	if(x == (int)x) {
		printf("%.2f la so nguyen!\n",x);
	} else {
		printf("%.2f khong phai la so nguyen!\n",x);
	}
	
	if(x>1 && x==(int)x) {
		int kiemTra = 1;
		int i = 2;
		
		while(i<=sqrt(x)) {
			if((int)x%i==0) {
				kiemTra = 0;
				break;
			}
		}
		
		if(kiemTra ==1) {
			printf("%.2f la so nguyen to!\n",x);
		} else {
			printf("%.2f khong phai la so nguyen to!\n",x);
		}			

	} else {
		printf("%.2f khong phai la so nguyen to\n",x);
	}
}

void soChinhPhuong() {
	float x;
	printf("Xin moi nhap vao x =");
	scanf("%f",&x);
	
	if(x == (int)x) {
		printf("%.2f la so nguyen\n",x);
	} else {
		printf("%.2f khong phai la so nguyen\n",x);
	}
	
	if(x>1 && sqrt(x) == (int)sqrt(x)) {
		printf("%.2f la so chinh phuong!\n",x);
	} else {
		printf("%.2f khong phai la so chinh phuong!\n",x);
	}
}

int main() {
	int choose;
	//char c[1];
	do {
//		system("cls");
		choose = 0;
		printf("\n++------------------------------------++\n");
		printf("|Chuc nang 1: Tinh trung binh tong     |\n");
		printf("|Chuc nang 2: Tim so nguyen to         |\n");
		printf("|Chuc nang 3: Tim so chinh phuong      |\n");
		printf("|Chuc nang 4: Thoat                    |\n");
		printf("+======================================+\n");
		printf("Xin moi chon chuc nang( 1,2,3,4): ");
		//scanf("%s",c);
		//if(stricmp(c,"N")==0) break;
		scanf("%d",&choose);
		switch(choose) {
			case 1:
				trungBinhCong();
				break;
			case 2:
				// chuc nang 2
				soNguyenTo();
				break;
			case 3:
				// chuc nang 3
				soChinhPhuong();
				break;
			case 4:
				printf("Game over!!!");
				exit(0);
			default:
				printf("Ban khong nhap dung chuong trinh!!!");
		}
		 
	} while(choose!=0);
	
	return 0;	
}
