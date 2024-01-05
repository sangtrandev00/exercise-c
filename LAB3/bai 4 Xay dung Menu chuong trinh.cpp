#include<stdio.h>
#include<math.h>
int main() {
	// Xay dung menu chuong trinh cho 3 bai tap tren
	// 1 chuong trinh tinh hoc luc
	// 2 Chuong trinh giai phuong trinh 
	// 2.1 Giai phuong trinh bac 1
	// 2.2 Giai phuong trinh bac 2
	// 3 Xay dung chuong tirnh tinh tien dien
	printf("1. Xay dung chuong trinh tinh hoc luc\n");
	printf("2. xay dung chuong trinh giai phuong trinh\n");
	printf("3. Xay dung chuong tirnh tinh tien dien\n");
	int number;
	printf("Xin moi nhap chuong trinh ban muon thuc thi:\n");
	scanf("%d",&number);
	switch(number)
	{
		case 1:
			printf("Chuc mung ban da chon: Xay dung chuong trinh hoc luc");
			break;
		case 2:
			printf("Chuc mung ban da chon: Xay dung chuong trinh giai phuong trinh");
			break;
		case 3: 
			printf("Chuc mung ban da chon: Xay dung chuong trinh tinh tien dien");
			break;
		default:
			printf("Chuc mung ban da chon: Ban da khong nhap dung so ben tren moi nhap lai");
			break;
	}
	return 0;
}
