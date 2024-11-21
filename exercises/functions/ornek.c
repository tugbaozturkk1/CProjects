/*

    kullanicidan sayi al switch case ile secim yaptir
    1 tek mi çift mi bulunma islemi 
    faktoriyel bulma islemi
    pi sayisiyla carpimini bulma islemi 
    islemler fonksiyonlar ile olacak ve ilki geri donus yapmayacak
*/

#include <stdio.h>
#define PI 3

void tek_cift();
int fact();
int carp_pi();

int main() {

    int sayi,secim;
    printf("sayi gir = ");
    scanf("%d",&sayi);

    printf("ne yapmak istersiniz?(3 secenek var)\n1.tek mi cift mi bulma\n2.faktoriyel hesaplama\n3.pi ile carpma\n");
    scanf("%d",&secim);

    switch(secim) {
        case 1 : 
                tek_cift(sayi);
                break;
        case 2 : 
                printf("%d",fact(sayi));
                break;
        case 3 : 
                printf("%d",carp_pi(sayi));
                break;
        default :
                printf("gecersiz islem");
                break;
    }

    return 0;
}

void tek_cift(int sayi) {
    
    if(sayi%2==0) {
        printf("%d sayisi cifttir",sayi);
    }
    else {
        printf("%d sayisi tektir",sayi);
    }
}

int fact(int sayi) {
    int i,sonuc=1;
    for(i=1; i<=sayi; i++) {
        sonuc *= i;
    } 
    return sonuc;
}

int carp_pi(int sayi) {
    return PI*sayi;
}