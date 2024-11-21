/*
    1 2 3 4 5
    ---------
    2 3 4 5 1
    3 4 5 1 2
    4 5 1 2 3 
    5 1 2 3 4   
    1 2 3 4 5
*/

#include <stdio.h>

int main() {

    int dizi[5] = {1,2,3,4,5};
    int i,j,temp,key;

    for(i=0; i<5; i++) {
        key = dizi[0];
        temp = dizi[1];
        for (j = 1; j < 4; j++) {
            dizi[j] = dizi[j + 1];
        }
        dizi[4] = key;
        dizi[0] = temp;
        for(j=0; j<5; j++){
            printf("%d ",dizi[j]);
        }
        printf("\n");
    }
    return 0;
}