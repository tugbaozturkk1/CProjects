/*
    1.ilk fonks strlength => parametre olarak katari alir ve katarin uzunlugunu int olarak dondurur
    2.strreverse => katari ve strlen'den gelen 2 parametre alir, katari tersine cevirir
    3.(ana) katari okur uzunlugunu bulmak icin strlen'i cagirir,katari tersine cevirmek icin strreverse'i cagirir
    bundan sonra katarin uzunlugu ve ters katari yazdirir
*/

#include <stdio.h>

int strlength();
void strreverse();

int main() {

    char dizi[100];
    int uzunluk;

    printf("metin gir = ");
    scanf("%s",dizi);

    // uzunluk = strlength(dizi);

    printf("dizinin uzunlugu = %d\n",strlength(dizi));
    strreverse(dizi,strlength(dizi));

    return 0;
}

int strlength(char dizi[]) {

    int i,uzunluk=0;
    for(i=0; dizi[i]!='\0'; i++) {
        uzunluk++;
    }
    return uzunluk;
}

void strreverse(char dizi[], int size) {

    char temp;
    int i;

    for(i=0; i<size/2; i++) {
        temp = dizi[i];
        dizi[i] = dizi[size-1-i];
        dizi[size-1-i] = temp;
    }
    printf("ters hal = %s",dizi);
}