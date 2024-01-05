#include<stdio.h>
	// input: nhap vao so tien can doi.
	// output: hien thi cac menh gia duoc doi ra.

void doiTien(int soTien)
	 {
	 	int menhGia[9]={500,200,100,50,20,10,5,2,1};
	 	int soTo[9]={0}; // tai sao phai gan bang 0;
	 	int i =0;
	 	while(i<9) {
	 		if (soTien>menhGia[i])
	 		break;
	 		i++;
		 }
		 while(i<9 && soTien>0) {
		 	soTo[i]=soTien/menhGia[i];
		 	soTien=soTien%menhGia[i];
		 	i++;
		 }
		 printf("So tien doi duoc la: \n");
		 for(int j=0;j<9;j++) {
		 	if (soTo[j]>0) {
		 		printf("%d to menh gia %d\n",soTo[j],menhGia[j]);
			 }
		 }
	}
	 	 
	 
int main() {
	int transMoney;
	printf("Xin moi nhap so tien can doi: ");
	scanf("%d",&transMoney);
	doiTien(transMoney);
}

// => phai lam lai nhieu de nho.
