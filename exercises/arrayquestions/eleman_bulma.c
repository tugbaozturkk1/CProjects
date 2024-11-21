// matristeki max ve min elemani bulma

#include <stdio.h>

int main() {

    int boyut,i,j;

    printf("boyut = ");
    scanf("%d",&boyut);

    int n[boyut][boyut],max,min;

    for(i=0; i<boyut; i++) {
        for(j=0; j<boyut; j++) {
            printf("matrisin elemani = ");
            scanf("%d",&n[i][j]);
        }
    }
    
    max=n[0][0];
    min=n[0][0];

    for(i=0; i<boyut; i++) {
        for(j=0; j<boyut; j++) {
            if(n[i][j] > max) {
                max = n[i][j];
            }

            if(n[i][j] < min) {
                min = n[i][j];
            }
        }
    }
    printf("max = %d ve min = %d",max,min);
    return 0;
}