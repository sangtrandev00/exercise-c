#include<stdio.h>
#include<math.h>
#include<conio.h>
#include<time.h>
#include<stdlib.h>

// su dung ham prototype.
void func21();
int func22();
int func23();
int func24();
int func25();
int func25();
void func26();
int func27();
int func28();
int func29();
int func210();
// yeu cau 1. Su dung switch - case lam menu.
void menu () {
    int choose;
    do {
        system("cls"); // ch?c nang c?a hàm này dùng d? làm gì nh? ?
         choose = 0;
         printf("--------------------------------------------------------\n");
         printf("=1. Kiem tra so nguyen to va so chinh phuong\n");
         printf("=2. Tim uoc so chung va boi so chung\n");
         printf("=3. Chuong trinh tinh tien cho quan Karaoke\n");
         printf("=4. Tinh tien dien\n");
         printf("=5. Chuc nang doi tien\n");
         printf("=6. Xay dung chuong trinh tinh lai suat vay ngan hang tra gop\n");
         printf("=7. Xay dung chuong trinh vay tien mua xe\n");
         printf("=8. Sap xep thong tin sinh vien\n");
         printf("=9. Xay dung game FPOLY-LOTT\n");
         printf("=10. Xay dung chuong trinh tinh toan phan so\n");
         printf("=0. Thoat chuong trinh thuc thi\n");
        printf("-----------------------------------------------------------");
        printf("Lua chon cua ban: ");
        scanf("%d",&choose);
        // su dung ham switch de lam menu chuong trinh.
        switch (choose)
        {
        case 1:
            printf("Lua chon Kiem tra so nguyen to va so chinh phuong\n ");
            // goi cac ham co lien quan
            func21();
            break;
        case 2:
            printf("Tim uoc so chung va boi so chung\n");
            // goi cac ham co lien quan
            func22();
            break;
        case 3:
            printf("Chuong trinh tinh tien cho quan Karaoke\n");
            func23();
            break;
        case 4:
            printf("Tinh tien dien\n");
            func24();
            break;
        case 5:
            printf("Chuc nang doi tien\n");
            func25();
            break;
        case 6:
            printf("Xay dung chuong trinh tinh lai suat vay ngan hang tra gop\n");
            func26();
            break;
        case 7:
            printf("Xay dung chuong trinh vay tien mua xe\n");
            func27();
            break;
        case 8:
            printf("Sap xep thong tin sinh vien\n");
            func28();
            break;
        case 9:
            printf(" Xay dung game FPOLY-LOTT\n");
            func29();
            break;
        case 10:
            printf("Xay dung chuong trinh tinh toan phan so\n");
            func210();
            break;
        case 0:
            break;
        default:
        printf("Ban nhap sai lua chon, xin moi nhap lai.\n");
            break;
        }
        if(choose !=0) {
            printf("Nhan phim enter de tiep tuc: ");
            fflush(stdin); // ham nay co nghia la gi // xoa man hinh da xuat.
            getchar();
        }
        }     while (choose !=0); 
    
    }

// yeu cau 2.1
int checkChinhPhuong(double number) {
    int flag =1;
    for (int i=2;i<=number;i++) {
        if(sqrt(number)==i) {
            flag =0;
            break;
        }
    }
    return flag;
}

int checkNguyenTo(int number ) {
    if(number < 2) {
        return 0;
    }
    int flag=1;

    for(int i=2;i<number;i++) {
        if(number % i == 0) {
            int flag=0;
            break;
        }
    }
    return flag;
}

void func21() { // tai sao goi la func21 co the goi la int func21.
    int number;
    printf("Xin moi nhap vao so nguyen : ");
    scanf("%d",&number);

    if(checkNguyenTo(number)==1) {
        printf("So %d vua nhap la so nguyen to\n",number);
    } else printf("So %d vua nhap khong phai la so nguyen to\n",number);

    if(checkChinhPhuong(number)==0) {
        printf("So %d vua nhap la so chinh phuong\n",number);
    } else printf("So %d vua nhap khong phai la so chinh phuong\n",number);
    
}
// yeu cau 2.2
// Su dung giai thuat euclid. De tinh uoc so chung lon nhat cua a va b.
int ucln (int a,int b) {
    while (a!=b)
    {
        if(a>b) a=a-b;
        else b=b-a;
    }
    return a; // a==b;
    
}

int bcln(int a,int b) {
    int c=a*b/ucln(a,b); // day la cong thuc tinh boi chung nho nhat khi tim thay uoc chung lon nhat.
    return c;
}

int func22() {
    int a,b;
    printf("Nhap a va b: ");
    scanf("%d%d",&a,&b);

    int gcd=ucln(a,b); // gcd = greatest common divisor. ( uoc chung lon nhat);
    printf("Uoc so chung lon nhat la: %d\n",gcd);

    int lmc = bcln(a,b); // lmc = least multiple common. ( boi chung nho nhat);
    printf("Boi chung nho nhat la: %d\n",lmc); 
}

// yeu cau 2.3
float checkOut(int startHour, int endHour) {
     // Tinh tien thi co the tra ve kieu du lieu la float.
    int count = endHour - startHour;
    float soTien=0;
        if(count <= 3)
        {
            soTien=count*150000;
            }
        else {
            soTien=count*150000 + (count - 3)*150000*0.7;
        }
    
    if(startHour>=14 && startHour<=17) {
        soTien=soTien*0.9;
    }
    return soTien;
}
int func23() {
    int startHour,endHour;
    int flag = 0;
    float tinhTien=0; // Dòng này khi nh?p s? li?u không chính xác s? tr? v? giá tr? c?a b?n là.
    do {
        printf("Xin moi nhap vao gio bat dau va gio ket thuc: ");
        scanf("%d%d",&startHour,&endHour);
        // gán giá tr? vào flag d? cho flag tr? v? giá tr? 0 ho?c 1.
        flag = startHour > endHour || startHour < 12 || startHour > 23 || endHour < 12 || endHour > 23; // so sanh cac gia tri de tra flag === 1.
    }
    while (flag!=0);
    tinhTien=checkOut(startHour,endHour);
    printf("Gia tien cua ban la: %.0f dong\n",tinhTien);
}

// yeu cau 2.4
float tienDien(int soDien) {
    float money;
        if(soDien<=50) {
            money=soDien*1678;
        } else if(soDien<=100) {
            money=soDien*1734;
        } else if(soDien<=200) {
            money=soDien*2014;
        } else if(soDien<=300) {
            money=soDien*2534;
        } else if(soDien<=400) {
            money=soDien*2834;
        } else money=soDien*2927;
    return money;
}

int func24() {
    int soDien;
    printf("Xin moi nhap vao so (kwh) dien su dung: ");
    scanf("%d",&soDien);
    float tinhTienDien=tienDien(soDien);
    printf("So tien Dien phai tra la: %.0f dong\n", tinhTienDien);
}

// yeu cau 2.5

void transMoney(int soTien) {
    int soTo[9]={0};
    int menhGia[9]={500,200,100,50,20,10,5,2,1};
    int i=0;
    while ( i<9) 
    {   
        if(soTien>menhGia[i])
        break;
        i++;
    }   
   /* while (i<9&&soTien>0)
    {
        soTo[i]=soTien/menhGia[i];
        
    } */
    
    for(;i<9 && soTien>0;i++) {
        soTo[i]=soTien/menhGia[i];
        soTien=soTien%menhGia[i];
    }
    for (int j = 0; j < 9; j++)
    {
        if(soTo[j]>0) {
            printf("%d to %d\n",soTo[j],menhGia[j]);
        }
    }

    // Vd: t? 500. Luu 2 t? vào s? t? ? v? trí 1. 1 t? vào s? t? ? v? trí 2.
}
int func25() {
    int soTien;
    printf("Xin moi nhap vao so tien can doi: ");
    scanf("%d",&soTien);
    transMoney(soTien);
}

// yeu cau 2.6

void laiSuat(float soTien) {
    float tienGoc;
    float laiSuat;
    float paidMoney;
    
    //laiSuat=0.05*soTien;
    tienGoc=soTien/12; // co dinh.
    //paidMoney=tienGoc+laiSuat; // thay doi khi lai suat thay doi. // Lai suat thay doi khi so tienThay doi

    printf("ky han\tLai phai tra\tGoc phai tra\tTien Phai Tra\tSo Tien con lai\n");
    for (int i = 1; i <= 12; i++)
    {
        laiSuat=0.05*soTien;
        paidMoney=laiSuat + tienGoc;
        soTien=soTien - tienGoc;
       printf("%d\t%.2f\t%.2f\t%.2f\t%.2f\n",i,laiSuat,tienGoc,paidMoney,soTien);
    }
}

void func26() {
    float soTien;
    printf("Xin moi nhap vao so tien can vay: ");
    scanf("%f",&soTien);
    laiSuat(soTien);
}

// yeu cau 2.7

void tienVayXe(float phanTram) {
    float traTruoc=(100-phanTram)*500000000/100;
    printf("So tien phai tra truoc la: %f dong\n",traTruoc);
    float soTien=500000000*phanTram/100;
    printf("ky han\tLai phai tra\tGoc phai tra\tTien Phai Tra\tSo Tien con lai\n");
    float tienGoc=soTien/24;
    float tienLai;
    float tongTien;
    for(int i=1;i<=24;i++) {
        tienLai=0.072*soTien;
        tongTien= tienLai + tienGoc;
        soTien=soTien-tienGoc;
        printf("%d\t%.2f\t%.2f\t%.2f\t%.2f\n",i,tienLai,tienGoc,tongTien,soTien);
    }
}

int func27() {
    float phanTram;
    printf("Xin moi nhap vao so phan tram vay toi da: ");
    scanf("%f",&phanTram);
    tienVayXe(phanTram);
}

// yeu cau 2.8
struct sinhVien{
    char hoTen[30];
    float diem;
};
// Hàm s?p x?p h?c l?c
char *xepHocLuc(float diemTb) {
    char *st; // tao ra mot con tro st kieu char
    if(diemTb>=9) {
        st="Xuat sac";

    } else if(diemTb>=8) {
        st ="Gioi";
    } else if(diemTb>=6.5) {
        st ="Kha";
    } else if(diemTb>=5) {
        st ="Trung Binh";
    } else  {
        st ="Yeu";
    }
    return st;
}
// Hàm nhap danh sách
void nhapDanhSach(struct sinhVien mangSv[], int *soLuong) {
    printf("Xin moi nhap vao so luong sinh vien: ");
    scanf("%d",soLuong);
    for(int i=0;i<*soLuong;i++) {
        fflush(stdin); // hàm này có ý nghia là gì ?
        printf("Xin moi nhap sinh vien thu %d\n",i+1);
        printf("Xin moi nhap vao ho ten: ");
        gets(mangSv[i].hoTen);
        printf("Xin moi nhap vao diem trung binh: ");
        scanf("%f",&mangSv[i].diem);
    }
}
// Hàm hi?n th? danh sách ra màn hình.
void hienThiDanhSach (struct sinhVien mangSv[], int soLuong) {
    printf("\n\tTTHONG TIN DANH SACH SINH VIEN \n");
    printf("STT\tHo Ten\t\tDiem Trung Binh\tHoc Luc\t\n");
    for(int i=0;i<soLuong;i++) {
        printf("%d\t%-15s\t%.1f\t\t%s\n",i+1,mangSv[i].hoTen,mangSv[i].diem, xepHocLuc(mangSv[i].diem));
    }
}
// ham sap xep danh sach
void arrangeStudent(struct sinhVien mangSv[], int soLuong) {

    for (int i = 0; i < soLuong-1; i++)
    {
        for (int j = i+1; j < soLuong; j++)
        {  
            if(mangSv[i].diem < mangSv[j].diem) {
                struct sinhVien temp;
               temp = mangSv[i];
               mangSv[i] = mangSv[j];
               mangSv[j] = temp;            
               }
        }
    }
}
int func28() {
    struct sinhVien mangSv[30];
    int soLuong;
    nhapDanhSach(mangSv,&soLuong);
    hienThiDanhSach(mangSv,soLuong);
    arrangeStudent(mangSv,soLuong);
    printf("Danh sach sinh vien, sau khi sap xep theo diem trung binh, theo thu tu giam dan la: \n");
    hienThiDanhSach(mangSv,soLuong);
}

// yeu cau 2.9
void nhapSo(int*a,int*b) {
    int flag = 0;
    do
    {
        printf("Nhap 2 so ( trong khaong 1 den 15): ");
        scanf("%d%d",a,b);

        flag = * a<1 || * a>15 || *b<1|| *b>15;
        if(flag != 0 ) {
            printf("Ban nhap sai so. Vui long nhap lai \n");
        }
    } while (flag !=0);
}

void soXo(int a,int b) {
    int rand1,rand2;
    srand(time(0)); // Cho phép kh?i t?o giá tr? ban d?u sinh ra ng?u nhiên.
    rand1=1+rand()%15; // bi?n rand1 du?c sinh ra ng?u nhiên t? 1 -> 15.
    rand2=1+rand()%15;
    printf("So duoc sinh ra: so 1: %d ---- so 2: %d\n",rand1,rand2);

    if((a==rand1&&b==rand2)||(a==rand2&&b==rand1)) {
        printf("Chuc mung ban da trung giai nhat \n");
    } else if(a==rand1||a==rand2||b==rand1||b==rand2) {
        printf("Chuc mung ban da trung giai nhi\n");
    } else {
        printf("chuc ban may man lan sau\n");
    }
}

int func29() {
    int a,b;
    nhapSo(&a,&b);
    soXo(a,b);
}

// yeu cau 2.10
typedef struct phanSo {
    float tu;
    float mau;
}phanSo;
// khai báo ki?u c?u trúc. V?i t? khóa typedef.
phanSo nhan(phanSo so1, phanSo so2) {
    phanSo tich;
    tich.tu=so1.tu*so2.tu;
    tich.mau=so1.mau*so2.mau;
    return tich;
}

phanSo chia (phanSo so1, phanSo so2) {
    phanSo thuong;
    thuong.tu=so1.tu*so2.mau;
    thuong.mau=so1.mau*so2.tu;
    return thuong;
}

void nhapPhanSo(phanSo *so) {
    printf("Nhap tu va mau: ");
    scanf("%f%f",&(*so).tu,&(*so).mau);
}

void hienThi(phanSo so) {
    printf("%.2f/%.2f",so.tu,so.mau);
}

void hienThiPhepToan(phanSo so1, phanSo so2, phanSo kq, char *toanTu) {
    printf("\n");
    hienThi(so1);
    printf("%s",toanTu);
    hienThi(so2);
    printf("=");
    hienThi(kq);
}

int func210() {
    phanSo so1,so2;
    printf("Nhap phan so thu 1: \n");
    nhapPhanSo(&so1);
    printf("Nhap phan so thu 2: \n");
    nhapPhanSo(&so2);
    
    phanSo tich = nhan(so1,so2);
    printf("\n Nhan hai phan so: \n");
    hienThiPhepToan(so1,so2,tich,"*");
    phanSo thuong = chia(so1,so2);
    printf("\nChia hai phan so: \n");
    hienThiPhepToan(so1,so2,thuong,"/");
    return 0;
}
// ham main
int main() {
	menu();
	return 0;
}

