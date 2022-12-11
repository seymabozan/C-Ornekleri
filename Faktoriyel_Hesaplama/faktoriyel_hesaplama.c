#include <stdio.h>

int main() 
{
    int a, sayi, faktor;
    printf("Faktöriyeli hesaplanacak sayıyı giriniz:");
    scanf("%1d", & sayi);
    faktor = 1;
    for (a=1; a<=sayi; a++)
    {
        faktor = faktor * a;
    }
    printf("%1d! = %1d", sayi, faktor);
    return 0;
}
