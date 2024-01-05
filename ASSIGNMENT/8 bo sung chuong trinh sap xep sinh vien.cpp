#include<stdio.h>
#include<string.h>

typedef struct SinhVien {
	char hoTen[50];
	float diem;
	char hocLuc[30];
} sv;

void nhapSv(sv mangSv[], int n) {
	for(int i = 0 ;i<n;i++) {
		printf("Xin moi nhap sinh vien %d\n",i+1);
		fflush(stdin);
		printf("ho va ten: ");
		gets(mangSv[i].hoTen);
		fflush(stdin);
		nhapLai:
		printf("diem sinh vien: ");
		scanf("%f",&mangSv[i].diem);
		if(mangSv[i].diem >10 || mangSv[i].diem <0) {
			printf("Nhap diem khong chinh xac! Moi nhap lai.\n");
			goto nhapLai;
		}
	}
	
}

void xuatSv(sv mangSv[],int n) {
	printf("------------------Thong tin sinh vien-------------------\n");
	for(int i = 0;i<n;i++) {
		printf("Sinh vien thu %d\n",i+1);
		printf("Ho ten: "); puts(mangSv[i].hoTen);
		printf("Diem: %.2f\n",mangSv[i].diem);
		printf("Hoc luc: ");puts(mangSv[i].hocLuc);
		printf("-------------------------------------\n");
	}
}

void HocLuc(sv mangSv[], int n) {
	for(int i=0; i<n;i++) {
		if(mangSv[i].diem >=9) {
			strcpy(mangSv[i].hocLuc,"Xuat Sac");
		}else if(mangSv[i].diem >=8) {
			strcpy(mangSv[i].hocLuc,"Gioi");
		}else if(mangSv[i].diem >=6.5) {
			strcpy(mangSv[i].hocLuc,"Kha");
		}else if(mangSv[i].diem >=5) {
			strcpy(mangSv[i].hocLuc,"Trung Binh");
		}else {
			strcpy(mangSv[i].hocLuc,"Yeu");
		}
	}
}

void sapXepDiem(sv mangSv[], int n) {
	for(int i = 0;i<n-1;i++) {
		for(int j = i+1;j<n;j++) {
			if(mangSv[i].diem < mangSv[i].diem) {
				sv temp;
				temp = mangSv[i];
				mangSv[i] = mangSv[j];
				mangSv[j] = temp;
			}
		}
	}
}

int main(){
	sv mangSv[100];
	sv sv1;
	int n;
	printf("Xin moi nhap vao so sinh vien: ");
	scanf("%d",&n);
	nhapSv(mangSv,n);
	HocLuc(mangSv,n);
	printf("Danh sach SV chua sap xep\n");
	xuatSv(mangSv,n);
	sapXepDiem(mangSv,n);
	printf("Danh sach SV sau sap xep\n");
	xuatSv(mangSv,n);
	return 0;
}
