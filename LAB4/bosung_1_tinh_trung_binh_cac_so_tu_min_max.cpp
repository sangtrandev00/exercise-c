#include<stdio.h>
#include<math.h>

int main() {
	float min,max;
	int dem = 0;
	int sum = 0;
	NhapLai:
	printf("Nhap vao min: ");
	scanf("%f",&min);
	printf("Nhap vao max: ");
	scanf("%f",&max);
	if(min>max) {
		printf("Ban nhap min >= max, xin moi nhap lai!\n");
		goto NhapLai;
	}	
	
	int i = ceil(min);
	while(i<= floor(max)) {
		if(i %2==0) {
			sum+=i;
			dem++;
		}
		i++;
	}
	
	printf("Trung binh cua cac so tu %.2f den %.2f va chia het cho 2 la: %.2f",min,max,(float)sum/(float)dem);
	return 0;
}
