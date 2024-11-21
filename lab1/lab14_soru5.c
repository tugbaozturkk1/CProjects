// asal sayi olup olmadigini bul

#include <stdio.h>

void asal_mi();

int main() {

    int sayi;

    printf("sayi gir = ");
    scanf("%d",&sayi);

    asal_mi(sayi);

    return 0;
}

void asal_mi(int sayi) {

    if(sayi%2==0 && sayi!=2) {
        printf("%d sayisi asal degil",sayi);
    }
    else if (sayi==2) {
        printf("2 sayisi asal");
    }
    else {
        printf("%d sayisi asal",sayi);
    }
}