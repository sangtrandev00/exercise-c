#include<stdio.h>
#include<conio.h>
#include<string.h>
int main() {
	// xay dung chuong trinh sap xep chuoi theo bang chu cai.
	int i;
	char chuoiBatKy[5][100];
	for ( i=0;i<5;i++) {
		printf("nhap chuoi thu %d: ",i+1);
		gets(chuoiBatKy[i]);
	}
	for(i=0;i<5;i++) {
		printf("Chuoi thu %d la: %s\n",i+1,chuoiBatKy[i]);
	}
	// output thu tu cac chuoi da duoc sap xep la: 
	for(i=0;i<5;i++) {
		for (int j = i+1;j<=5;j++) {
		if(strcmp(chuoiBatKy[i],chuoiBatKy[i+1])>0) {
			char temp[50];
			strcpy(temp,chuoiBatKy[i]);
			strcpy(chuoiBatKy[i],chuoiBatKy[j]);
			strcpy(chuoiBatKy[j],temp);
			/*
			temp=chuoiBatKy[i];
			chuoiBatKy[i]=chuoiBatKy[j];
			chuoiBatKy[j]=temp;*/
		}
		}
	}
	printf("Chuoi sau khi da sap xep theo bang chu cai la\n");
	for(i=0;i<5;i++) {
		printf("\n%s",chuoiBatKy[i]);
	}
	return 0;
}
