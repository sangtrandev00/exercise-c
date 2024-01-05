#include<stdio.h>
#include<math.h>
// chua xong!!!
int main() {
	int x;
	printf("Xin moi nhap vao x de kiem tra so chinh phuong:");
	scanf("%d",&x);
	int i = 2;
	int dem = 0;
	//
	while(i<=x) {
		if(sqrt(x) == i) {
			dem++;
			break;
		}
		i++;
	}
	
	if(dem==1) {
		printf("So vua nhap la so chinh phuong!");
	}else {
		printf("So vua nhap khong phai la so chinh phuong");
	} 
	
	return 0;
}
