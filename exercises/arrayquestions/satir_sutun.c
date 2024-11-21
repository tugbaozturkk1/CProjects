// sondan bir onceki satir ve sutunun toplami
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

    for(i=0; i<=(boyut-2); i++) {
        j = (boyut - 2);
        toplam += n[i][j];
    }

    for(j=0; j<=(boyut-2); j++) {
        i = (boyut - 2);
        toplam += n[i][j];
    }

    printf("%d",toplam-n[boyut-2][boyut-2]);

    return 0;   
}