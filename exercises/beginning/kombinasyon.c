// n elemanli kumenin r li kombinasyonlarinin sayisi

#include <stdio.h>

int main() {

    int i,j,k,n,r,f,sonuc,sayi=1,sayi2=1,sayi3=1;

    printf("eleman sayisi giriniz = ");
    scanf("%d",&n);

    printf("sayi giriniz = ");
    scanf("%d",&r);

    f = n-r;

    for(i=1; i<=n; i++) {
        sayi = sayi * i;
    }

    for(j=1; j<=r; j++) {
        sayi2 *= j;
    }
    
    for(k=1; k<=f; k++) {
        sayi3 *= k;
    }
    sonuc = sayi/(sayi2*sayi3);
    printf("%d",sonuc);
    return 0;
}