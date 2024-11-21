#include <stdio.h>

int main() {

    int n,i,j,temp;

    printf("dizi kac elemanli olsun? = ");
    scanf("%d",&n);

    int dizi[n];

    for(i=0; i<n; i++) {
        printf("dizinin %d. elemani = ",i+1);
        scanf("%d",&dizi[i]);
    }

    for(i=0; i<n-1; i++) {
        for(j=0; j<n-1; j++) {
            if(dizi[j+1]<dizi[j]) {
                temp = dizi[j];
                dizi[j] = dizi[j+1];
                dizi[j+1] = temp;
            }
        }
    }

    printf("sirali dizi = ");
    for(i=0; i<n; i++) {
        printf("%d ",dizi[i]);
    }

    return 0; 
}