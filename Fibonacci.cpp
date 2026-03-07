#include <stdio.h>
#include <math.h>

void fibonacci(int n){
    printf(" 0 1 ");
    int f1=1 , f2 =0;
    for (int i = 3 ; i<=n;i++){
       int fn = f1+f2;
       printf("%d ",fn);
       f2=f1;
       f1=fn;
    }

}
int main(){
    int n; 
    printf("Nhap N : ");
    scanf("%d",&n);
    fibonacci(n);
    return 0;

}