// girilen sirali diziye sirayi bozmadan sayi ekle

#include <stdio.h>

void ekleme();

int main() {

    int i,boyut,ek_sayi;
    printf("dizinin boyutunu gir = ");
    scanf("%d",&boyut);

    printf("eklenecek sayi = ");
    scanf("%d",&ek_sayi);

    int dizi[boyut];
    printf("dizinin elemanlarini sirali gir = ");
    for(i=0; i<boyut; i++) {
        scanf("%d",&dizi[i]);
    }
    ekleme(dizi,boyut+1,ek_sayi);
    return 0;
}

void ekleme(int dizi[], int size, int ek_sayi) {
    
    int i,j;
    for(i=0; i<size-1; i++) {
        if(dizi[i]>ek_sayi) {
            for(j=size-1; j>i; j--) {
                dizi[j] = dizi[j-1];
            }
            dizi[i] = ek_sayi;
            break;
        }
    }
    for(i=0; i<size; i++) {
        printf("%d ",dizi[i]);
    }
}