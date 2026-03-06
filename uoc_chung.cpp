#include <stdio.h>
#include <math.h>

int ucln(long long a, long long b){
  if (b==0) return a;
     return ucln(b,a%b);
}

int main(){
    int a , b;
    printf("Nhap a va b :");
    scanf("%d%d",&a,&b);
    if (ucln(a,b)==1) printf("%d %d la hai so nguyen to cung nhau ",a,b);
    else printf("%d %d khong phai la hai so nguyen to cung nhau ",a,b);
   return 0;

}