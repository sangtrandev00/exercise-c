#include<stdio.h>
int main(){
	int sotien;
	NhapLai:
		printf("Nhap vao so tien: ");
		scanf("%d",&sotien);
		switch(sotien) {
			case 500:
			case 200:
			case 100:
			case 50:
			case 20:
			case 10:
			case 5:
			case 2:
			case 1:
				goto TiepTuc;
			default:
				printf("So tien nhap khong chinh xac!\n");
				goto NhapLai;
		}
		
		TiepTuc:
			int MG[] = {500,200,100,50,20,10,5,2,1};
			int vt;
			
			for(int i = 0;i<9;i++) {
				if(sotien == MG[i]) {
					vt = i;
					break;
				}
			}
			
			int soto;
			for(int j = vt;j<9 && sotien!=0 ;j++) {
				if(sotien ==1) {
					printf("%d la menh gia nho nhat khong the doi",sotien);
					break;
				}
				
				soto = sotien/MG[j+1];
				if(soto!=0) {
					printf("%d to menh gia %d\n",soto,MG[j+1]);
				}
				sotien = sotien%MG[j+1];
			}
			
	return 0;
}
