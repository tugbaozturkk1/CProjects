// ana kosegen 1, digerleri 0

#include <stdio.h>

int main() {

    int boyut,i,j,toplam=0;

    printf("boyut = ");
    scanf("%d",&boyut);

    int n[boyut][boyut];

    for(i=0; i<boyut; i++) {
        for(j=0; j<boyut; j++) {
            if(i==j) {
                printf("1 ");
            }
            else {
                printf("0 ");
            }
        }
        printf("\n");
    }   
    return 0;
}