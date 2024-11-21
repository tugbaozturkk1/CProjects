// x degeri gir, seriyi toplat

#include <stdio.h>
void topla();

int main() {

    int x;

    printf("bir sayi gir = ");
    scanf("%d",&x);

    topla(x);

    return 0;
}

void topla(int sayi) {
    int i,toplam=0;
    for(i=1; i<=sayi; i++) {
        toplam += i;
    }
    printf("girilen sayiya kadar olan sayilarin toplami = %d",toplam);
}