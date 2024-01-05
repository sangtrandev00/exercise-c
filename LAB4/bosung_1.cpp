#include<stdio.h>
#include<math.h>
#include<string.h>
int main() {
	float min,max;
	int dem = 0;
	int sum = 0;
//	while(true) {
		printf("Nhap vao min: ");
		scanf("%f",&min);
		printf("Nhap vao max: ");
		scanf("%f",&max);
	
		int i =ceil(min);
		while(i<=floor(max)) {
			if(i%2==0) {
				sum+=i;
				dem++;
			}
			i++;
		}
		printf("Trung binh cua cac so tu %.2f den %.2f chia het cho 2 la: %.2f\n",min,max,(float)sum/(float)dem);
//		
//		fflush(stdin);
//		char c[1];
//		printf("Neu muon dung chuong trinh nhan (N/n), Tiep tuc chuong trinh nhan (enter)\n");
//		scanf("%c",&c);
//		if(stricmp(c,"N") ==0) {
//			break;
//		
	
	return 0;
}
