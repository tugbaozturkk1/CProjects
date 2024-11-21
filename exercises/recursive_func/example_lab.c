#include <stdio.h>

// girilen dizideki max eleman

int diziMax();

int main() {

    int dizi[5] = {12,5,106,96,63};
    static int max;
    max=dizi[0];
    printf("dizideki max eleman = %d",diziMax(dizi,5));

    return 0;
}
int diziMax(int dizi[], int size) {

    if (size == 1) {
        return dizi[0];
    }

    int enBuyukKalan = diziMax(dizi, size - 1);
    if (dizi[size - 1] > enBuyukKalan) {
        return dizi[size - 1];
    } 
    else {
        return enBuyukKalan;
    }
}