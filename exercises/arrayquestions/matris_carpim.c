/*
    a[2][2] = { 1, 2 
                3, 4}    c = a*b = { a00*b00+a01*b10, a00*b01+a01*bb11
                                     a10*b00+a11*b10, a10*b01+a11*b11 }
    b[2][2] = { 0, 2
                1, 2}

    1.nin satiri ile 2.nin sutununu carp topla
*/

#include <stdio.h>

int main() {

    int i,j,k,n;

    printf("kare matris icin eleman sayisi gir = ");
    scanf("%d",&n);

    int a[n][n],b[n][n],c[n][n];

    for(i=0; i<n; i++) {
        for(j=0; j<n; j++) {
            printf("a matrisi icin eleman gir = ");
            scanf("%d",&a[i][j]);
            printf("b matrisi icin eleman gir = ");
            scanf("%d",&b[i][j]);
        }
    }

    for(i=0; i<n; i++) {
        for(j=0; j<n; j++) {
            c[i][j] = 0;
            for(k=0; k<n; k++) {
                c[i][j] += a[i][k]*b[k][j];
            }
            printf("%d ",c[i][j]);
        }
        printf("\n");
    }
    return 0;
}