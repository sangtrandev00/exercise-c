#include<stdio.h>
#include<stdlib.h>

float GTLN(float a, float b, float c) {
	float max = a;
	if(max < b) {
		max = b;
	}
	if(max < c) {
		max = c;
	}
	return max;
}

void chucNang1(){
	float a,b,c;
	printf("Xin moi nhap vao 3 so a b c: ");
	scanf("%f%f%f",&a,&b,&c);
	float maxABC = GTLN(a,b,c);
	printf("Gia tri lon nhat cua 3 so %.2f va %.2f va %.2f la: %.2f\n",a,b,c,maxABC);
}

int checkYear(int nam) {
	int check = 0;
	if(nam%400==0 || (nam %100!=0 && nam %4==0)) {
		check = 1;
	}
	return check;
}

void chucNang2(){
	int nam;
	printf("Xin moi nhap vao mot nam de kiem tra nam thuan: \n");
	scanf("%d",&nam);
	if(checkYear(nam) == 1) {
		printf("Nam %d la nam thuan!\n",nam);
	} else {
		printf("Nam %d khong phai la nam thuan!\n",nam);
	}
}

void hoanVi(float &a,float &b) {
	float temp = a;
	a = b;
	b = temp;
}

void chucNang3(){
	float a,b;
	printf("nhap vao 2 so a,b: ");
	scanf("%f%f",&a,&b);
	printf("2 so %.2f va %.2f truoc khi hoan vi la: \n",a,b);
	printf("a = %.2f\n",a);
	printf("b = %.2f\n",b);
	printf("2 so %.2f va %.2f sau khi hoan vi la: \n",a,b);
	hoanVi(a,b);
	printf("a = %.2f\n",a);
	printf("b = %.2f\n",b);	
}

int main(){
	int choose = 0;
	
	do {
		system("cls");
		printf("\t\t\t\t**************************MENU***************************\n");
		printf("\t\t\t\t* 1: Tim gia tri lon nhat cua 3 so a, b, c              *\n");
		printf("\t\t\t\t* 2: Kiem tra nam thuan                                 *\n");
		printf("\t\t\t\t* 3: Hoan vi hai so a va b                              *\n");
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
