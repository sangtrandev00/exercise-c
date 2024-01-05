#include<stdio.h>
#include<math.h> 
int main() {
	// nhap tu ban phim 2 gia tri min,max;
	// output: tinh trung binh tong cua cac so tu nhien chia het cho 2 tu min toi max
	int i, min, max;
	double trungBinh=0;
	int j=0;
	int tong = 0;
	printf("Xin moi nhap vao gia tri min va max\n");
	printf("min:",min);
	scanf("%d",&min);
	printf("max:",max);
	scanf("%d",&max);
	i = min;
	for (i=1;i<=max;i++)
	{
		if (i%2==0) {
			tong+=i;
			j++;
		}
	}
	trungBinh=tong/j;
	printf("Trung binh tong cua cac so tu nhien chia het cho 2 la: %lf",trungBinh);
	return 0;
}
