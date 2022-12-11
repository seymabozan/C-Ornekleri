#include <stdio.h>
#include <math.h> /*Kullanacağımız kütüphaneleri giriyoruz.*/
float StandartSapmaHesaplama(float sayi[]);
int main() /*Ana fonksiyonumuzu açıyoruz.*/
{
    int i;
    float sayi[10]; /*Dışarıdan kaç tane sayı gireceğimizi ayarlıyoruz.*/
    printf("10 Tane Sayı Giriniz: ");
    for (i = 0; i < 10; i++) /*Girilecek olan sayılarımızı for döngüsü ile tek seferde giriş yapıyoruz.*/
    {
        scanf("%f", &sayi[i]);
    }
    printf("\nStandart Sapma = %.6f", StandartSapmaHesaplama(sayi)); /*Burada standart sapma hesaplaması yapabilmemiz için ana fonksiyonumuzu yardımcı StandartSapmaHesaplama fonksiyonuna gönderiyoruz.*/
    return 0;
}
float StandartSapmaHesaplama(float sayi[]) /*Yardımcı hesaplama fonksiyonumuzu açıyoruz.*/
{
    float toplam = 0.0, orta, standartsapma = 0.0;
    int i;
    for (i = 0; i < 10; i++)
    {
        toplam = toplam + sayi[i];
    }
    orta = toplam / 10;
    for (i = 0; i < 10; i++)
    {
        standartsapma = standartsapma + pow(sayi[i] - orta, 2); /*Burada ise artık standart sapmanın hesaplamalarını yapıyoruz.*/
    }
    return sqrt(standartsapma / 10); /*Burada da standartsapma bölü 10'un karekökü şeklinde geri dönüyor ve hesaplama son bulunca da ana fonksiyonumuza geri dönecektir.*/
}