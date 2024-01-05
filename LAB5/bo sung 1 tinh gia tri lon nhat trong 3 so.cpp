#include<stdio.h>

float GTLN(float a, float b, float c) {
	float max = a;
	if(max < b) {
		max = b;
	}
	if(max < c) {
		max = c;
	}
	return max;
}

int main(){
	float a,b,c;
	printf("Xin moi nhap vao 3 so a b c: ");
	scanf("%f%f%f",&a,&b,&c);
	float maxABC = GTLN(a,b,c);
	printf("Gia tri lon nhat cua 3 so %.2f va %.2f va %.2f la: %.2f",a,b,c,maxABC);
	return 0;
}
