#include<stdio.h>
#include<string.h>
int main () {
	// nhap vao username va password
	// output: Dang nhap thanh cong hay khong thanh cong
	// mat khau va tai khoan co dinh ( unchange ).
	char userSys[]="Admin";
	char passSys[]="12345";
	// khai bao bien pass word va ky tu username can nhap
	char username[50];
	char password[30];
	printf("Xin moi nhap vao username:");
	gets(username);
	printf("Xin moi nhap vao password:");
	gets(password);
	if ( strcmp(username,"Admin")==0 && strcmp(password,"12345")==0) {
		{
		printf("Ban da dang nhap thanh cong");
		}
		} else {
		printf("Ban da dang nhap that bai! \n username va password khong dung"); 
		}
	return 0;
}

// Bai tap da hoan thanh nhung phai su dung them ham so sanh trong chuoi do la strcmp.
