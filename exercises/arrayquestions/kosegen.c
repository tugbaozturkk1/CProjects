// a matrisinden kosegen b matrisini olusturma

#include <stdio.h>

int main() {

    int i,j,k=0,boyut;

    printf("boyut gir = ");
    scanf("%d",&boyut);

    int a[boyut][boyut],b[boyut];

    for(i=0; i<boyut; i++) {
        for(j=0; j<boyut; j++) {
            printf("matris degeri gir = ");
            scanf("%d",&a[i][j]);
        }
    }

    for(i=0; i<boyut; i++) {
        for(j=0; j<boyut; j++) {
            if(i==j) {
                b[k] = a[i][j];
                k++;
            }
        }
    }

    for(k=0; k<boyut; k++) {
        printf("%d\n",b[k]);
    }

    return 0;
}