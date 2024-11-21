#include <stdio.h>

int main() {

    int i,j,index,min,n;
    printf("kac eleman olsun? = ");
    scanf("%d",&n);

    int dizi[n];

    for(i=0; i<n; i++) {
        printf("dizinin %d. elemani = ",i+1);
        scanf("%d",&dizi[i]);
    }

    for(i=0; i<n-1; i++) {
        min=dizi[n-1];
        index=n-1;
        for(j=i; j<n-1; j++) {
            if(dizi[j]<min) {
                min=dizi[j];
                index=j;
            }
        }
        dizi[index]=dizi[i];
        dizi[i]=min;
    }
    
    printf("dizinin elemanlari = ");

    for(i=0; i<n; i++) {
        printf("%d ",dizi[i]);
    }
    return 0;
}