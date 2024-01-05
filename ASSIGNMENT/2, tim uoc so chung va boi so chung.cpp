#include<stdio.h>
#include<math.h>
#include<string.h>
int ucln(int x,int y ) {
	int z;
	while(x%y!=0)
	{
		int z=x%y;
		x=y;
		y=z;
	}
	return y;
}
int main() {
	// tim uoc so chung va boi so chung cua 2 so.
	// uoc chung lon nhat cua 2 so a,b la so nguyen lon nhat ma a va b chia het.
	// boi chung nho nhat cua 2 so a,b la so nguyen nho nhat co the chia het cho a va b.
	// Giai thuat euclid.
	int a,b;
	printf("Xin moi nhap 2 so nguyen a,b: ");
	scanf("%d%d",&a,&b);
	int UCLN =ucln(a,b);
	printf("uoc chung lon nhat cua a va b la: %d\n",UCLN);
	int BCNN=a*b/UCLN; // Tai sao lai co cong thuc nay. chung minh cho minh xem.
	printf("Boi chung nho nhat cua a va b la: %d",BCNN);
	return 0;
}
