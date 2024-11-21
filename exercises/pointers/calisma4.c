/*
    kullanicidan sayi dizisi al
    varyans hesapla
*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int varyans();

int main() {

    int *p,eleman,i;

    printf("dizi kac elemanli olsun? = ");
    scanf("%d",&eleman);

    p=(int *)malloc(eleman*sizeof(int));

    printf("dizi elemanlarini gir ");
    for(i=0; i<eleman; i++) {
        scanf("%d",p+i);
    }

    printf("varyans degeri = %d",varyans(p,eleman));

    return 0;
}

int varyans(int arr[], int size) {

    int ortalama,i,toplam=0,varyans,ic_toplam=0;
    for(i=0; i<size; i++) {
        toplam += arr[i];
    }
    ortalama=toplam/size;
    for(i=0; i<size; i++) {
        ic_toplam += pow((arr[i]-ortalama),2);
    }
    varyans = ic_toplam/size;
    return varyans;
}