#include<stdio.h>


int main(){
	int menhGia;
	int viTri;
	nhapMenhGia:
	printf("Xin moi nhap vao menh gia cua ban: ");
	scanf("%d",&menhGia);
	if(menhGia == 500 || menhGia == 200||menhGia == 100||menhGia == 50||menhGia == 20||menhGia == 10||menhGia == 5||menhGia == 2||menhGia ==1) {	
		goto tiepTuc;
	} else {
		printf("Ban nhap menh gia khong chinh xac, moi nhap lai\n");
		goto nhapMenhGia;
	}
	tiepTuc:
	int MG[]={500,200,100,50,20,10,5,2,1};
	int soTo;
	for(int i = 0;i<9;i++) {
		if(menhGia == MG[i]) {
			viTri = i;
			break;
		}
	}
	for(int j = viTri;j<9 &&menhGia >0;j++) {
		soTo = menhGia/MG[j+1];
		if(soTo > 0 ){
			printf("%d to menh gia %d\n",soTo,MG[j+1]);
		}
		menhGia  = menhGia % MG[j+1];
	}
		
}
