// klavyeden dizi elemanlari al ve kac tanesi 4'un kati fonks ile yazdir

#include <stdio.h>
int dordun_katlari(int dizi[], int size ) {

    int i,sayac=0;

    for(i=0; i<size; i++) {
        if(dizi[i]%4==0) {
            sayac++;
        }
    }

    return sayac;
}

int main() {

    int n,i;

    printf("dizi kac elemanli olsun = ");
    scanf("%d",&n);

    int dizi[n];

    for(i=0; i<n; i++) {
        printf("dizinin %d. elemani = ",i+1);
        scanf("%d",&dizi[i]);
    }

    printf("dizideki 4'un kati olan sayi sayisi = %d",dordun_katlari(dizi,n));
    return 0;
}