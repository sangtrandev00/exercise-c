#include <stdio.h>
#include<string.h>
#include<ctype.h> // Day la thu vien gi day
int main () {
	char s[5][20]; // Khai bao mang hai chieu => phai hoc lai cai nay
	// mang 2 chieu, chieu thu nhat luu so luong cac chuoi, chieu thu 2 luu so cac ky tu co trong mot chuoi.
	for ( int i = 0;i < 5;i++) {
	printf("Chuoi s[%d]",i);
	gets(s[i]); 
	} // su dung 1 vong lap for de nhap chuoi
	for (int i = 0; i<4;i++) {
		for (int j = i + 1 ; j<5;j++) {
			if ( strcmp(s[i],s[j])>0) {
				char temp[20];
				strcpy(temp, s[i]);
				strcpy(s[i],s[j]);
				strcpy(s[j],temp);
			}
		}	
	} // su dung 2 vong lap for cho phep sap xep chuoi trong mang
	printf("Chuoi vua nhap la: \n ");
	for ( int i =0;i<5;i++) {
		printf("\n%s",s[i]);
	}
	return 0;
}
// => Co the toi uu hoa cac bai tap nay, bang cach dinh nghia ra cac ham.
 
