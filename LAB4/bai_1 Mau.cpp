#include<stdio.h>
#include<math.h>
int main()
{
	int min,max;
	printf("min: \n",min);
	scanf("%d",&min);
	printf("max: \n",max);
	scanf("%d",&max);
	int i = min;
	float tong = 0, bienDem = 0, trungBinh = 0;
	while( i <= max){
	if (i % 2 == 0){
	tong += i;
	bienDem ++;
	}
	i++;
	}
	trungBinh = tong/bienDem;
	printf("Trung binh: %f", trungBinh);
	return 0;
}
