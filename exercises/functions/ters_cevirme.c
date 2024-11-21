#include <stdio.h>
#include <string.h>

void terscevir(char metin[]) {

    int i,temp,uzunluk;
    uzunluk = strlen(metin);

    for(i=0; i<uzunluk/2; i++) {
        temp = metin[i];
        metin[i] = metin[uzunluk-1-i];
        metin[uzunluk-1-i] = temp;
    }
    printf("ters cevrilmis hali = %s",metin);
}

int main() {

    char metin[200];

    printf("metin gir = ");
    scanf("%s",metin);

    terscevir(metin);
    return 0;
}