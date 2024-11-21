/*
    ogrenci no rakamlari top boyutuna sahip bir dizi olustur
    kullanicidan degerler al
    3 ile bolunenler dizinin basina 
    bolunmeyenleri dizinin sonuna ekle
    dizinin son halini yazdir
*/

#include <stdio.h>

int main() {

    int a[7],i,j=0,temp;

    printf("dizinin elemanlarini gir = ");
    for(i=0; i<7; i++) {
        scanf("%d",&a[i]);
    }

    for(i=0; i<7; i++) {
        if(a[i]%3==0) {
            temp = a[i];
            a[i] = a[j];
            a[j] = temp;
            j++;
        }
    }

    for(i=0; i<7; i++) {
        printf("%d ",a[i]);
    }

    return 0;
}