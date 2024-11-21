/*
    n*n tipindeki matrisin bir sonraki sutunu bir oncekiyle carparak n*n-1 tipine indirgeme
*/

#include <stdio.h>

int main() {
    
    int boyut,i,j;

    printf("boyut = ");
    scanf("%d",&boyut);

    int n[boyut][boyut],a[boyut][boyut-1];

    for(i=0; i<boyut; i++) {
        for(j=0; j<boyut; j++) {
            printf("matrisin elemani = ");
            scanf("%d",&n[i][j]);
        }
    }

    for(i=0; i<boyut; i++) {
        for(j=0; j<boyut-1; j++) {
            a[i][j] = n[i][j] * n[i][j+1];
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    return 0;
}

