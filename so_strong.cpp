#include <stdio.h>
#include <math.h>

int gt(int n){
    int rev = 1;
    for (int i =1; i<=n;i++){
        rev*=i;
    }
    return rev;
}

int strongNumber(int n){
    int sum = 0 , tmp = n;
    while(n){
        sum+=gt(n%10);
        n/=10;
    } 
    return sum == tmp;
}

int main(){
    int a , b ;
    printf("Nhap a va b : ");
    scanf("%d%d",&a,&b);
    int dem = 0;
    for (int i=a;i<=b;i++){
        if(strongNumber(i)){ 
        printf("%d  ",i);
        dem++ ;

    }
    if (!dem ) printf("0");

 }
 return 0;
}