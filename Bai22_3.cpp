#include <stdio.h>

int demKyTu(char *s ) {
    int count = 0;
    while (*s != '\0')
    {
        count ++ ;
        s++;

    }   return count ;
 
}

void daoNguoc(char *s){
   if (*s =='\0') return ;

   char *start =s ;
   char *end = s ;

while (*end != '\0')
{
    end++;
}
end--;

while (start < end )
{
   char temp = *start ;
   *start = *end ;
   *end = temp ;

   start++;
   end--;
  }
}

int demTu(char *s){
   int count = 0;
   int inWord = 0;
   while (*s != '\0')
   {
    if (*s == ' ' || *s == '\t' || *s == '\n'){
        inWord = 0 ;
    } else if (inWord == 0){
        inWord = 1;
        count++;
    }
    s++;
   }
   return count ;
   

}

void inHoaToanBo(char *s){
    while (*s != '\0')
    {
        if (*s>='a' && *s<= 'z')
        *s=*s - 32;
    s++;
    }
 
}

int main(){
    char str[200];
    printf("Nhap mot chuoi : ");
    fgets(str , sizeof(str) ,stdin );

    char *p = str ;
    while (*p!='\0')
    {
        if(*p == '\n') {
            *p = '\0';
            break;
        }
        p++;
    }

    printf("So ky tu %d\n",demKyTu(str));
    printf("So tu trong chuoi %d\n",demTu(str));
    inHoaToanBo(str);
    printf("Chuoi sau khi duoc in hoa toan bo %s\n",str);
    daoNguoc(str);
    printf("Chuoi sau khi dao nguoc %s\n",str);

  return 0;
}
    

