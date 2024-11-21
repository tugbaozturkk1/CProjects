/*
ana kosegen altindaki degerlerin 0 old. matrisler
        n=3 icin
    a(1,1) a(1,2) a(1,3)
    0      a(2,2) a(2,3)       
    0      0      a(3,3)
*/

#include <stdio.h>

int main() {

    int i,j,boyut;

    printf("boyut gir = ");
    scanf("%d",&boyut);

    int n[boyut][boyut];

    for(i=0; i<boyut; i++) {
        for(j=0; j<boyut; j++) {
            printf("matris degeri gir = ");
            scanf("%d",&n[i][j]);
        }
    }

    for(i=0; i<boyut; i++) {
        for(j=0; j<boyut; j++) {
            if(j>=i) {
                printf("%d ",n[i][j]);
            }
            else {
                n[i][j] = 0;
                printf("%d ",n[i][j]);
            }
        }
        printf("\n");
    }

    return 0;
}