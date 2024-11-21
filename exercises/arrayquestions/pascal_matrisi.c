/*
    1
    1 1         kenarlar 1, taban kenarlar bir ust kenarin toplami
    1 2 1
    1 3 3 1
    1 4 6 4 1 
*/

#include <stdio.h>

int main() {

    int n,i,j,a[30][30];

    printf("sayi gir = ");
    scanf("%d",&n);

    for(i=0; i<n; i++) {
        for(j=0; j<n; j++) {
            if(j==0 || i==j) {
                a[i][j] = 1;
            }
            else if (j>i){
                a[i][j] = 0;
            }
            else {
                a[i][j] = a[i-1][j-1] + a[i-1][j];
            }
        }
    }

    for(i=0; i<n; i++) {
        for(j=0; j<n; j++) {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }


    return 0;
}

