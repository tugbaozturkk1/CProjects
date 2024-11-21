// transpoze = ayna görevi   satir => sutun && sutun => satir

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
            printf("%d ",n[j][i]);
        }
        printf("\n");
    }


    return 0;
}