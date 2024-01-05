#include<stdio.h>
#include<string.h>

int main() {
	char username[] ="admin", password[]="123456";
	char user[100];
	char pass[100];
	
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
	
	printf("Ban da dang nhap thanh cong!");
	return 0;
}
