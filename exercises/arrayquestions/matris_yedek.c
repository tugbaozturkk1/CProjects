// yedek kosegen ustundeki elemanlar

#include <stdio.h>

int main() {

    int boyut,i,j,toplam=0;

    printf("boyut = ");
    scanf("%d",&boyut);

    int n[boyut][boyut];

    for(i=0; i<boyut; i++) {
        for(j=0; j<boyut; j++) {
            printf("matrisin elemani = ");
            scanf("%d",&n[i][j]);
        }
    }

    for(i=0; i<boyut; i++) {
        for(j=0; j<boyut; j++) {
            if((i+j)==(boyut-1)) {
                toplam += n[i][j];
            }
        }
    }
    printf("%d",toplam);

    return 0;
}