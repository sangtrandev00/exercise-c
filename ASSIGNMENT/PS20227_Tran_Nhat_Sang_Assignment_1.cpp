#include<stdio.h>
#include<stdlib.h>

void menu() {
	int choose = 0;
	
	do {
		system("cls");
		//printf("\t\t\t\t*********************************************************\n");
		printf("\t\t\t\t**************************MENU***************************\n");
		printf("\t\t\t\t* 1: Kiem tra so nguyen                                 *\n");
		printf("\t\t\t\t* 2: Tim uoc so chung va boi so chung cua 2 so          *\n");
		printf("\t\t\t\t* 3: Chuong trinh tinh tien cho quan karaoke            *\n");
		printf("\t\t\t\t* 4: Tinh tien dien                                     *\n");
		printf("\t\t\t\t* 5: Chuc nang doi tien                                 *\n");
		printf("\t\t\t\t* 6: Chuc nang tinh lai suat vay ngan hang vay tra gop: *\n");
		printf("\t\t\t\t* 7: Xay dung chuong trinh vay tien mua xe              *\n");
		printf("\t\t\t\t* 8: Sap xep thong tin sinh vien                        *\n");
		printf("\t\t\t\t* 9: Game FPOLY - LOTT                                  *\n");
		printf("\t\t\t\t* 10: Tinh toan phan so                                 *\n");
		printf("\t\t\t\t* Nhan phim bat ky de thoat chuong trinh:                *\n");
		printf("\t\t\t\t*********************************************************\n");
		printf("\t\t\t\t*Xin moi nhap chuc nang can thuc hien:                  *\n");
		scanf("%d",&choose);
		
		switch(choose) {
			case 1:
				printf("Thuc hien Chuc nang 1: Kiem tra so nguyen \n");
				//chucNang1();
				break;
			case 2:
				printf("Thuc hien chuc nang 2: Tim uoc so chung va boi so chung cua 2 so \n");
				//chucNang2();
				break;
			case 3:
				printf("Thuc hien Chuc nang 3: Chuong trinh tinh tien cho quan karaoke \n");
				//chucNang3(); // => chua finished
				break;
			case 4:
				printf("Thuc hien Chuc nang 4: Tinh tien dien\n");
				//chucNang4();
				break;
			case 5:
				printf("Thuc hien Chuc nang 5: Chuc nang doi tien \n");
				//chucNang5();
				break;
			case 6:
				printf("Thuc hien Chuc nang 6: Chuc nang tinh lai suat vay ngan hang vay tra gop:\n");
				//chucNang6();
				//getInterestRate(); // lai xuat ngan hang
				break;
			case 7:
				printf("Thuc hien Chuc nang 7: Xay dung chuong trinh vay tien mua xe\n");
				//chucNang7();
				//getMoneyBuyCar();
				break;
			case 8:
				printf("Thuc hien Chuc nang 8: Sap xep thong tin sinh vien \n");
				//chucNang8();
				//arrangeStudent();
				break;
			case 9:
				printf("Thuc hien Chuc nang 9: Game FPOLY - LOTT \n");
				//chucNang9();
				//playGameFpoly();
				break;
			case 10:
				printf("Thuc hien Chuc nang 10: Tinh toan phan so\n");
				//chucNang10();
				//calculateFraction(); // => chua duoc finished
				break;
			default: 
				//printf("");
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
