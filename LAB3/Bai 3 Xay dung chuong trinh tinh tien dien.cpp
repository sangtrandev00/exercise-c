#include<stdio.h>
#include<math.h>
int main()
{
	double sodien;
	double sotien;
	do {
		printf("Moi nhap vao so kwh dien: ");
		scanf("%lf",&sodien);
		if(sodien<0) {
			printf("So dien nhap khong chinh xac moi nhap lai!");
		}
	} while(sodien<0);
	if(sodien<=50) {
		sotien = sodien * 1678;
		printf("So tien dien la: %.2f",sotien);
	} 
	else if(sodien<=100) {
		sotien = 1678 *  50 + (sodien - 50 ) * 1734;
		printf("So tien dien la: %.2f",sotien);
	}else if(sodien<=200) {
		sotien = 1678 * 50 + 1734 * 50 + (sodien - 100) * 2014;
		printf("So tien dien la: %.2f",sotien);
	}
	else if(sodien<=300) {
		sotien = 1678 * 50 + 1734 * 50 + 2014 * 100 + ( sodien - 200) * 2536;
		printf("So tien dien la: %.2f",sotien);
	}
	else if(sodien<=400) {
		sotien = 1678 * 50 + 1734 * 50 + 2014 * 100 + 2536 * 100 +( sodien - 300) * 2834;
		printf("So tien dien la: %.2f",sotien);
	}
	else {
		sotien = 1678 * 50 + 1734 * 50 + 2014 * 100 + 2536 * 100 + 2834 * 100 +(sodien - 400) * 2927;
		printf("So tien dien la: %.2f",sotien);
	}
	return 0;
}
