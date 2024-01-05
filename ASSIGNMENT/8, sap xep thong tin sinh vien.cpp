#include<stdio.h>
// 8, sap xep thong tin sinh vien.
struct sinhVien {
	char hoTen[50];
	float diemTb;
};
// ham xep hang hoc luc
char *xepHocLuc(float diemTb) {
	char *st; // hoc them ve ham con tro
	if(diemTb>=9) {
		st="Xuat sac";
	} else if(diemTb>=8) {
		st = "gioi";
	} else if(diemTb>=6.5) {
		st ="kha";
	} else if(diemTb>=5) {
		st ="Trung Binh";
	} else {
		st ="Yeu";
	}
	return st;
}
// ham sap xep danh sach
void sapXepDanhSach(struct sinhVien danhSach[], int soLuong) {
	for(int i=0;i<soLuong-1;i++) {
		for(int j=i+1;j<soLuong;j++) {
			if(danhSach[i].diemTb>danhSach[j].diemTb) {
				struct sinhVien temp = danhSach[i];
				danhSach[i] = danhSach[j];
				danhSach[j]= temp;
			}
		}
	}
}
// ham nhap danh sach sinh vien
void nhapDanhSach(struct sinhVien danhSach[], int* soLuong) {
	printf("Nhap so luong sinh vien: ");
	scanf("%d", soLuong);
	for(int i=0;i<*soLuong;i++) {
		fflush(stdin); // Ham nay co chuc nang lam gi ?
		printf("Nhap sinh vien thu %d: \n",i+1);
		printf("Ho ten: ");
		gets(danhSach[i].hoTen );
		printf("Diem trung binh: ");
		scanf("%f",&danhSach[i].diemTb);
	}
}
// ham hien thi danh sach sinh vien
void hienThiDanhSach(struct sinhVien danhSach[], int soLuong) {
	printf("\n\t\tDANH SACH SINH VIEN\n");
	printf("STT\tHo ten\t\tDiem trung binh\tHoc luc\t\n");
	for( int i=0;i<soLuong;i++) {
		printf("%d\t%-15s\t%.1f\t%s\n",i+1,danhSach[i].hoTen, danhSach[i].diemTb,xepHocLuc(danhSach[i].diemTb));
	}
}
int main() {
	struct sinhVien danhSach[50];
	int soLuong;
	nhapDanhSach(danhSach,&soLuong);
	hienThiDanhSach(danhSach,soLuong);
	sapXepDanhSach(danhSach,soLuong);
	printf("\nDanh sach sau khi sap xep theo diem trung binh\n");
	hienThiDanhSach(danhSach,soLuong);
	return 0;
}
