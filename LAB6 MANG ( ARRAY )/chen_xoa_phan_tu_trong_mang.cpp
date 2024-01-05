#include<stdio.h>


const int Max = 100;
int main(){
	
	int arr[] = {1,2,3,4,5,6,7,8}; // So phan tu co dinh cua no luon luon la: 8. Khong The thay doi.
	int soPhanTu  = sizeof(arr)/sizeof(int);
	int viTriThem;
	int giaTriThem;
	
	printf("Xin moi nhap vi tri muon them: ");
	scanf("%d",&viTriThem);
	printf("Xin moi nhap vao gia tri them: ");
	scanf("%d",&giaTriThem);
	
	for(int i = soPhanTu-1;i>=viTriThem;i--) {
		arr[i+1] = arr[i];
	}
	
	arr[viTriThem] = giaTriThem;
	soPhanTu +=1;
	printf("Mang sau khi them phan tu la: \n");
	for(int i = 0;i<soPhanTu;i++) {
		printf("arr[%d] = %d\n",i,arr[i]);
	}
	//printf("So phan tu cua mang sau khi them %d vao la %d",giaTriThem,soPhanTu);
}
