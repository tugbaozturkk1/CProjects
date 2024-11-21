// belirlenen mesafedeki elemanlari karsilastirir 

#include <stdio.h>

int main() {

    int i,j,temp,mesafe,n;

    printf("kac eleman olsun? = ");
    scanf("%d",&n);

    mesafe = n - 2;

    int dizi[n];

    for(i=0; i<n; i++) {
        printf("dizinin %d. elemani = ",i+1);
        scanf("%d",&dizi[i]);
    }

    while(mesafe!=0) {
        for(i=0; i<n; i++) {
            for(j=mesafe; j>=0; j--) {
                if(dizi[j] > dizi[i]) {
                    temp = dizi[i];
                    dizi[i] = dizi[j];
                    dizi[j] = temp;
                }
            }
        }
        mesafe--;
    }

    printf("sirali dizi = ");
    for(i=0; i<n; i++) {
        printf("%d ",dizi[i]);
    }

    return 0; 
}