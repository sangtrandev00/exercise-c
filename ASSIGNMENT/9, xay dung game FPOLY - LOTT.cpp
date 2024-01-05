#include<stdio.h>
#include<time.h>
#include<conio.h>
#include<stdlib.h>
void nhapSo(int*a, int*b) {
	int flag = 0;
	do {
		printf("Nhap 2 so ( trong khoang 1 den 15): ");
		scanf("%d%d",a,b);
		
		flag = * a<1 || *a>15 || *b>15; // dong nay co y nghia la gi nhi ?
		if(flag !=0) {
			printf("Ban nhap sai do. Vui long nhap lai. \n");
		}
	} while (flag !=0 );
}
void xoSo(int a,int b) {
	int rand1,rand2;
	srand(time(0)); // cho phep khoi tao gia tri ban dau thuat toan sinh ra ngau nhien
	rand1=1+rand()%15;
	rand2=1+rand()%15;
	printf("So duoc sinh ra: So 1 %d - so 2 %d\n",rand1,rand2);
	
	if((a==rand1 && b == rand2) || (a==rand2) && (b==rand1)) {
		printf("Chuc mung ban da trung giai nhat \n");
	}else if (a==rand1 || a==rand2|| b==rand1||b==rand2) {
		printf("Chuc mung ban da trung giai nhi \n");
	} else {
		printf("Chuc ban may man lan sau\n");
	}
}
int main() {
	int a,b;
	
	nhapSo(&a,&b);
	xoSo(a,b);
}
