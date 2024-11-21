// cocktail-sort => bubble-sort'un bastan sona,sondan basa hali

#include <stdio.h>

int main() {

    int ilk = -1,son,temp,n,degisim=1,i;

    printf("dizi kac elemanli olsun? = ");
    scanf("%d",&n);

    int dizi[n];

    for(i=0; i<n; i++) {
        printf("dizinin %d. elemani = ",i+1);
        scanf("%d",&dizi[i]);
    }

    son = n - 1;

    while(degisim == 1) {
        degisim = 0;
        ilk += 1;
        for(i=ilk; i<son; i++) {
            if(dizi[i+1] < dizi[i]) {
                temp = dizi[i];
                dizi[i] = dizi[i+1];
                dizi[i+1] = temp;
                degisim = 1;
            }
        }
        if(degisim=1) {
            degisim = 0;
            son -= 1;
            for(i=son; i>ilk; i--) {
                if(dizi[i-1] > dizi[i]) {
                    temp = dizi[i];
                    dizi[i] = dizi[i-1];
                    dizi[i-1] = temp;
                    degisim = 1;
                }
            }
        }
    }

    printf("sirali dizi = ");
    for(i=0; i<n; i++) {
        printf("%d ",dizi[i]);
    }

    return 0;
}