#include<stdio.h>

int checkYear(int nam) {
	int check = 0;
	if(nam%400==0 || (nam %100!=0 && nam %4==0)) {
		check = 1;
	}
	return check;
}

int main(){
	int nam;
	printf("Xin moi nhap vao mot nam de kiem tra nam thuan: ");
	scanf("%d",&nam);
	if(checkYear(nam) == 1) {
		printf("Nam %d la nam thuan!",nam);
	} else {
		printf("Nam %d khong phai la nam thuan!",nam);
	}
	return 0;
}
