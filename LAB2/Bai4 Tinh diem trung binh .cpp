#include<stdio.h>
int main()
{
	double diemToan, diemLy, diemHoa;
	double DiemTrungBinh;
	printf("Xin moi nhap diem mon Toan: ");
	scanf("%lf",&diemToan);
	printf("Xin moi nhap diem mon Ly: ");
	scanf("%lf",&diemLy);
	printf("Xin moi nhap diem mon Hoa: ");
	scanf("%lf",&diemHoa);
	DiemTrungBinh = (diemToan*3+diemLy*2+diemHoa*1)/6;
	printf("Diem trung binh cua Toan Ly Hoa la %lf",DiemTrungBinh);
	return 0;
}
