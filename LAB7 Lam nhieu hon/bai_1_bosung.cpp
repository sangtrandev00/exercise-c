#include<stdio.h>
#include<ctype.h>
#include<string.h>

int main() {
	// Xay dung chuong trinh dem nguyen am va phu am cua 1 chuoi!
	char string[100];
	int demPhuAm = 0, demNguyenAm = 0;
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
	printf("So nguyen am cua cau vua nhap la: %d",demNguyenAm);
	return 0;
}
