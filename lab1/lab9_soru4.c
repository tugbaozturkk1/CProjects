// palindrom sayi tersten okunus ayni

#include <stdio.h>

int main() {

    int sonuc=0,sayi,basamak,yeniSayi;
    printf("sayi gir = ");
    scanf("%d",&sayi);

    yeniSayi = sayi;

    while(yeniSayi>0) {

        basamak = yeniSayi % 10;
        sonuc = sonuc*10 + basamak;
        yeniSayi = yeniSayi / 10;
    }
    if(sonuc == sayi) {
        printf("sayi palindrom sayidir = %d",sayi);
    }
    else {
        printf("sayi palindrom sayi degildir = %d",sayi);
    }

    return 0;
}