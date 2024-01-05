#include<stdio.h>
#include<math.h>

	int checkYear(int namThuan){
	int check = 0;
		if (namThuan%4==0 && namThuan%100!=0) {
		check = 1;
	}
		if ( check == 1) printf("Day la nam thuan");
		else printf("Day la nam khong nhuan");
	}
		int main () { 
			int kiemtra;
			kiemtra=checkYear(2016);
		return 0;
	}
	
