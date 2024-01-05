#include<stdio.h>
#include<math.h>
int main()
{
	// xay dung chuong trinh xac dinh so nguyen to
	// in put: nhap tu ban phim so x
	// out put : ket luan x co phai la so nguyen to khong
	int i, so, dem = 0;
	printf("Xin moi nhap vao so nguyen tu ban phim:");
	scanf("%d",&so);
	for ( i=2;i<so;i++) {
		if ( so % i == 0) dem=1;
		break;
	}
	if ( dem == 1) {
	printf("Day khong  la so nguyen to"); }
	else {
		printf(" Day la so nguyen to");
	}
	return 0;
} 
