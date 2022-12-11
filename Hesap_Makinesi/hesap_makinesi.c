#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf ("Hesap Makinesine Hoşgeldiniz.\n");
    printf ("Toplama işlemi yapmak için + tuşuna basınız.\n");
    printf ("Çıkarma işlemi yapmak için - tuşuna basınız.\n");
    printf ("Çarpma işlemi için * tuşuna basınız.\n");
    printf ("Bölme işlemi için / tuşuna basınız.\n");
    printf ("Girilen işaret:");
    
    char islem;
    int a,b,sonuc;
    
    scanf("%c",&islem);
    printf("İki Sayı Giriniz:");
    scanf("%d %d",&a,&b);
    switch (islem)
 {
     case '+':
     printf("%d+%d=%d",a,b,a+b);
     break;
     
     case '-':
     printf("%d-%d=%d",a,b,a-b);
     break;
     
     case '*':
     printf("%d*%d=%d",a,b,a*b);
     break;
     
     case '/':
     printf("%d/%d=%d",a,b,a/b);
     break;
 }
 return 0;
}
