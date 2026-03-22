#include <stdio.h>

double cong(double a ,double b ){return a+b ;}
double tru(double a ,double b ){return a-b ;}
double nhan(double a ,double b ){return a*b ;}
double chia(double a ,double b ){return a/b ;}

int main(){
double (*phepTinh[4])( double ,double) = {cong , tru , nhan , chia };

char *tenPhep[]={"+","-","*","/"};
double a , b ;
char phepToan;

printf("Nhap phep tinh : ");
scanf("%lf %c %lf",&a ,&phepToan, &b );

int timThay = 0 ;

for (int i = 0; i < 4; i++) {
        if (phepToan == tenPhep[i][0]) { 
            timThay = 1;
            
            if (phepToan == '/' && b == 0) {
                printf("Loi: Khong the chia cho 0!\n");
            } else {
                double ketQua = phepTinh[i](a, b);
                printf("Ket qua: %.2lf %c %.2lf = %.2lf\n", a, phepToan, b, ketQua);
            }
            break; 
        }
    }
    
    if (timThay == 0) {
        printf("Loi: Phep toan '%c' khong hop le!\n", phepToan);
    }

    return 0;


}