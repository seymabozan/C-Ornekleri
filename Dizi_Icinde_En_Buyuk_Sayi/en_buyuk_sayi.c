#include <stdio.h>

int main()  /*Ana fonksiyonumuzu açıyoruz.*/
{
    int n;
    double arr[250];  /*Oluşturacağımız double tipibde ki dizinin en fazla kaç elemanlı olacağını belirliyoruz.*/
    printf("Toplam eleman sayısını giriniz(0 ile 250 arasında): ");  /*Oluşturacağımız dizinin kaç elemanlı olacağını giriyoruz.*/
    scanf("%d", &n);
    
    for(int i=0; i<n; ++i)  /*Oluşturacağımız dizinde ki toplam eleman sayısı kadar sayı girmesini isteyeceğiz burada.*/
    {
        printf("Sayı girin%d: ", i+1);
        scanf("%lf", &arr[i]);
    }
    for(int i=1; i<n; ++i)  /*Burada da oluşturduğumuz dizinin en büyük elemanını bulacağız.*/
    {
        if(arr[0]<arr[i]) {
            arr[0] = arr[i];  /*Dizinde ki en büyük elemanı son olarak arr[0] da saklanacaktır.*/
        }
    }
    printf("En büyük eleman = %.2lf", arr[0]);  /*arr[0] da saklanacak olan en büyük elemanı ekrana yazdıracağız.*/
    return 0;
}
