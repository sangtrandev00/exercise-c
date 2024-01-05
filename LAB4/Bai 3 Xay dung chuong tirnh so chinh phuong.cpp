#include<stdio.h>
#include<math.h>
int main () {
	int i; 
	int so, check =0;
	printf("Xin moi nhap mot so de kiem tra so chinh phuong: ");
	printf("%d",so);
	scanf("%d",&so);
	for (i = 1;i<=so;i++) {
		if ( i*i == so) {
		check = 1;
		break; 
		}
	}
	if (check==1) printf("%d la so chinh phuong",so);
	else printf("%d khong phai la so chinh phuong",so);
	return 0;
}
