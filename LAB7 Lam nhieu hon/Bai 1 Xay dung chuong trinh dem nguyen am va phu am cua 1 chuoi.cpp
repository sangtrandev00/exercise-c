#include<stdio.h>
int main() {
	char s[100];
	printf("xin moi nhap vao chuoi: ");
	gets(s);
	int i = 0,n=0,p=0;
	// trong khi gia tri cuoi cua mang !=Null
	while (s[i++]!='\0') {
		if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='u'||s[i]=='o') {
			n++;
		} else {
			p++;
		}
	}
	printf("Chuoi '%s' co chua: %d nguyen am va %d phu am",s,n,p);
	return 0;
}

// bai toan nay van chua toi uu - vi in ra co tinh luon space(khoang cach) la mot ky tu => Neu nhap vao khoang trang thi tinh lam sao ?
// van can lam lai de nho ( repeat it 4 times more )
// Neu dem duoc khoang trang, thi de dang roi.
