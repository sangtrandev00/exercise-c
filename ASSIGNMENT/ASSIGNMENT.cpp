//assignment Nhap mon lap trinh.
#include<stdio.h>
#include<string.h>
#include<math.h> 

int main() {
	
	// menu chuong trinh
	printf("1. kiem tra so nguyen\n");
	printf("2. Tim uoc so chung va boi so chung cua 2 so\n");
	printf("3. Chuong trinh tinh tien cho quan Karaoke\n");
	printf("4. Tinh tien dien\n");
	printf("5. Doi tien\n");
	printf("6. Tinh lai xuat vay ngan hang, vay tra gop\n");
	printf("7. Vay tien mua xe\n");
	printf("8. Sap xep thong tin sinh vien\n");
	printf("9. game FPOLY - LOTT(2/15)\n");
	printf("10. Chuong trinh tinh toan phan so\n");
	int number;
	printf("Xin moi nhap vao chuong trinh can chay:\n");
	scanf("%d",&number);
	switch(number) {
		case 1: 
		printf("1. kiem tra so nguyen");
		break;
		case 2: 
		printf("2. Tim uoc so chung va boi so chung cua 2 so");
		break;
		case 3: 
		printf("3. Chuong trinh tinh tien cho quan Karaoke");
		break;
		case 4: 
		printf("4. Tinh tien dien");
		break;
		case 5: 
		printf("5. Doi tien");
		break;
		case 6: 
		printf("6. Tinh lai xuat vay ngan hang, vay tra gop");
		break;
		case 7: 
		printf("7. Vay tien mua xe");
		break;
		case 8: 
		printf("8. Sap xep thong tin sinh vien");
		break;
		case 9: 
		printf("9. game FPOLY - LOTT(2/15)");
		break;
		case 10: 
		printf("10. Chuong trinh tinh toan phan so");
		break;
	}
	return 0;
}
