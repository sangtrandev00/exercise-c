#include<stdio.h>
#include<time.h>
#include<math.h>
#include<stdlib.h>



bool checkSo(int *a, int *b) {
	int check = 0;
	check = *a<1 || *a>15 || *b<1|| *b>15;
	if(check == 0) {
		return 1;
	} else {
		return 0;
	}
}

int main(){
	
	int so1, so2;
	nhapSo:
	printf("Nhap so 1: (1->15) ");
	scanf("%d",&so1);
	
	printf("Nhap so 2: (1->15) ");
	scanf("%d",&so2);
	if(checkSo(&so1,&so2)== 0) {
		printf("So vua nhap khong chinh xac moi nhap lai: \n");
		goto nhapSo;
	}
	
	srand((int) time(0));
	
	// xin ra so ngau nhien trong doan tu 1 ->15  // day la cong thuc.s
   	int soXo1 = rand() % ( 15 + 1 - 1) + 1;
   	int soXo2 = rand() % ( 15 + 1 - 1) + 1;
	printf("So xo lan 1: -----%2d------\n",soXo1);
	printf("So xo lan 2: -----%2d------\n",soXo2);
	
	if((so1 == soXo1 && so2 == soXo2) ||(so1 ==soXo2&&so2==soXo1)) {
		printf("Chuc mung ban da trung giai nhat");
	}
	else if(so1 == soXo1||so1==soXo2||so2 == soXo1||so2==soXo2) {
		printf("Chuc mung ban da trung giai nhi");
	} else {
		printf("chuc ban may man lan sau");
	}
	
	return 0;
	
}
