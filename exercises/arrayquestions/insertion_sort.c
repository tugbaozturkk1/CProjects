// 2.elemandan itibaren sirayla key degeri yap ve butun degerlerle karsilastir

#include <stdio.h>

int main() {

    int i,j,key,n;

    printf("dizi kac elemanli olsun? = ");
    scanf("%d",&n);

    int dizi[n];

    for(i=0; i<n; i++) {
        printf("dizinin %d. elemani = ",i+1);
        scanf("%d",&dizi[i]);
    }

    for(i=1; i<n; i++) {
        key = dizi[i];
        j=i-1;
        while(j>=0 && dizi[j]>key) {
            dizi[j+1] = dizi[j];
            j--;
            dizi[j+1] = key;
        }
    }

    printf("sirali dizi = ");
    for(i=0; i<n; i++) {
        printf("%d ",dizi[i]);
    }

    return 0;
}