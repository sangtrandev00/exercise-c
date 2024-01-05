#include<stdio.h>
#include<string.h>
#include<stdlib.h>

void exercise1() {
	// Xay dung chuong trinh dem nguyen am va phu am cua 1 chuoi!
	char string[100];
	int demPhuAm = 0, demNguyenAm = 0;
	fflush(stdin);
	printf("nhap vao mot chuoi: ");
	fgets(string,sizeof(string),stdin);	
	strlwr(string);
	for(int i = 0;i<strlen(string)-1;i++) {
		if(string[i] <= 'z' && string[i] >='a') {
			if(string[i] == 'a' || string[i] == 'o' || string[i] == 'e' || string[i] == 'u' || string[i] == 'i') {
				demNguyenAm++;
			} else {
				demPhuAm++;
			}
		}
	}
	printf("So phu am cua cau vua nhap la: %d\n",demPhuAm);
	printf("So nguyen am cua cau vua nhap la: %d\n",demNguyenAm);
}


void exercise2() {
	char username[] ="admin", password[]="123456";
	char user[100];
	char pass[100];
	fflush(stdin);
	do {
	printf("Xin moi nhap vao username: ");
	//fgets(user,sizeof(user),stdin); => fgets co them ky tu enter o cuoi!
	gets(user);
	//fflush(stdin);
	printf("Xin moi nhap vao password: ");
	//fgets(pass,sizeof(user),stdin); => fgets co them ky tu enter o cuoi!
	gets(pass);
		if((strcmp(user,"admin") != 0) || (strcmp(pass,"123456") != 0)) {
			printf("Ban nhap khong dung username va password! Moi nhap lai\n");
		}
	}
	while((strcmp(user,"admin") != 0) || (strcmp(pass,"123456") != 0));
	printf("Ban da dang nhap thanh cong!\n");
}

void exercise3() {
	char string[5][100];
	fflush(stdin);
	
	// nhap chuoi
	for(int i =0;i<5;i++) {
		printf("Nhap mang chuoi thu string[%d][100]: ",i);
		//fgets(string[i],sizeof(string[i]),stdin);
		gets(string[i]);
	}
	// sap xep
	for(int i=0;i<4;i++) {
		for(int j = i+1;j<5;j++) {
			if(strcmp(string[i],string[j]) > 0) {
				char stringTemp[100];
				strcpy(stringTemp,string[i]);
				strcpy(string[i],string[j]);
				strcpy(string[j],stringTemp);
				//stringTemp = string[i]; // khong duoc dung truc tiep. Vi cai nay la gan con tro
				//string[i] = string[j];
				//string[j] = stringTemp;
			}
		}
	}
	
	// xuat chuoi
	printf("\nChuoi sau khi da duoc sap xep theo chu cai la:\n");
	for(int i=0;i<5;i++) {
		puts(string[i]);
	}
	
}


int main(){
	int choose = 0;
	
	do {
		system("cls");
		printf("\t\t\t\t**************************MENU*****************************\n");
		printf("\t\t\t\t* 1: Chuong trinh dem nguyen va phu am cua 1 chuoi        *\n");
		printf("\t\t\t\t* 2: Chuong trinh dang nhap bang userName va passWord     *\n");
		printf("\t\t\t\t* 3: Chuong trinh sap xep chuoi theo bang chu cai         *\n");
		printf("\t\t\t\t* Nhan phim bat ky de thoat chuong trinh:                 *\n");
		printf("\t\t\t\t***********************************************************\n");
		printf("\t\t\t\t*        Xin moi nhap chuc nang can thuc hien:            *\n");
		scanf("%d",&choose);
		
		switch(choose) {
			case 1:
				
				exercise1();
				break;
				
			case 2:
				exercise2();
				break;
			case 3:
				exercise3();
				break;
			default: 
				exit(0);
		}
		if(choose !=0) {
			printf("Nhan phim enter de tiep tuc: ");
			fflush(stdin);
			getchar();
		}
		
	} while(choose!=0);
}
