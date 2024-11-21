#include <stdio.h>

int main() {

    int num,sonuc,birlerBas;

    printf("sayi gir = ");
    scanf("%d",&num);

    birlerBas = num%10;

    if(birlerBas < 5) {
        sonuc = num - (num%10);
    }
    else {
        sonuc = num + (10 - birlerBas);
    }
    printf("sayinin yuvarlanma sonucu = %d",sonuc);

    return 0;
}