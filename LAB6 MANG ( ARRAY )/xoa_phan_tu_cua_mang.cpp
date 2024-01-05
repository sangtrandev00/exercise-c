#include<stdio.h>

int main(){
	int arr[] = {1,2,3,4,5,6,7,8}; // So phan tu co dinh cua no luon luon la: 8. Khong The thay doi.
	int soPhanTu  = sizeof(arr)/sizeof(int);
	printf("cac phan tu cua mang truoc khi xoa la: \n");
		for(int i = 0;i<=soPhanTu-1;i++) {
		printf("arr[%d] = %d\n",i,arr[i]);
	}

	int viTriXoa;
	printf("Xin moi nhap vao vi tri muon xoa: ");
	scanf("%d",&viTriXoa);
	

	for(int i = viTriXoa ;i<=soPhanTu-1;i++) {
		arr[i] = arr[i+1];
	}
	
	soPhanTu  =soPhanTu - 1;
	printf("Cac phan tu cua mang sau khi xoa vi tri %d la: \n",viTriXoa);
	for(int i = 0;i<=soPhanTu-1;i++) {
		printf("arr[%d] = %d\n",i,arr[i]);
	}
	
	//	printf("arr[10] = %d",arr[]);
	// truong hop mang co nhieu gia tri giong nhau thi lam nhu the nao ?
	return 0;
}
