#include<stdio.h>
#include<string.h>
int main() {
	char string[5][100];
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
	
	return 0;
}
