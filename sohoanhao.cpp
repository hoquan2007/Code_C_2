#include<stdio.h>
#include<math.h>

int hh(int n){
    int sum =1 ;
    for (int i=2; i<=sqrt(n);i++){
        if (n%i==0){
        if (i!=n/i)
         sum += i + n/i ;
        else sum += i;
    }
    }
    if (sum == n ) return 1;
     return 0;
}

int main(){
int n ; 
printf(" Nhap N : ");
scanf("%d",&n);
if (hh(n)) printf("Yes ");
else printf("No ");
return 0;


}