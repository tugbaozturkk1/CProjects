#include <stdio.h>

int main() {

    int i,sayilar[10],maks1,maks2,temp;

    printf("1. sayiyi gir = ");
    scanf("%d",&sayilar[0]);
    maks1 = sayilar[0];

    printf("2. sayiyi gir = ");
    scanf("%d",&sayilar[1]);
    maks2 = sayilar[1];
    
    if(maks1 < maks2) {
        temp = maks2;
        maks2 = maks1;
        maks1 = temp; 
    }

    for(i=2; i<10; i++) {
        printf("%d. sayiyi gir = ",i+1);
        scanf("%d",&sayilar[i]);
        if(sayilar[i] > maks1) {
            maks2 = maks1;
            maks1 = sayilar[i];
        } 
        else if(sayilar[i] > maks2 && sayilar[i] < maks1) {
            maks2 = sayilar[i];
        }
    }

    printf("maks1 = %d ve maks2 = %d",maks1,maks2);

    return 0;
}