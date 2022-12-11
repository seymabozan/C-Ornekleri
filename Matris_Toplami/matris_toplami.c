#include <stdio.h>  /*Kütüphanemizi ekliyoruz.*/

int main() {  /*Ana fonksiyonumuz açıyoruz.*/
    int satir,sutun,A[100][100],B[100][100],toplam[100][100],i,j;
    printf("Satır sayısını giriniz (1 ile 100 arsında): ");  /*Matrisimizin satır sayısını gireceğiz.*/
    scanf("%d", &satir);
    printf("Sütün sayısını giriniz (1 ile 100 arasında): ");  /*Burda da sütün sayımızı gireceğiz.*/
    scanf("%d", &sutun);
    
    printf("\nBirinci matris elemanlarını giriniz:\n");  /*Oluşturacağımız ilk matrisin elemanlarını yazacağız.*/
    for(i=0; i<satir; ++i)
    for(j=0; j<sutun; ++j) {
        printf("Eleman giriniz A%d%d: ", i+1, j+1);
        scanf("%d", &A[i][j]);
    }
    printf("\nİkinci matris elemanlarını giriniz:\n");  /*İkinci matrsin elemanlarını yazacağız.*/
    for(i=0; i<satir; ++i)
    for(j=0; j<sutun; ++j) {
        printf("Eleman giriniz B%d%d: ", i+1, j+1);
        scanf("%d", &B[i][j]);
    }
    for(i=0; i<satir; ++i)  
    for(j=0; j<sutun; ++j) {
        toplam[i][j] = A[i][j] + B[i][j]; /*Burada oluşturduğumuz o iki matrisi toplayacağız.*/
    }
    printf("\nİki matris toplamı:\n");  /*Oluşturduğumuz matrisleri topladıktan sonra ekrana sonucu basacağız.*/
    for(i=0; i<satir; ++i)
    for(j=0; j<sutun; ++j) {
        printf("%d  ", toplam[i][j]);
        if(j == sutun - 1) {
            printf("\n\n");
        }
    }
    return 0;
}
