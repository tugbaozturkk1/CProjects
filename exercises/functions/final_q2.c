/*
    id  math    prog    pyhsc   average
    1   67      76      55      0
    2   34      79      76      0
    3   56      68      57      0
    4   66      89      65      0

    her ogrencinin ort hesp. ve average sutununa ekle
    max ort yapani id ve average ile yazdir
    2 boyutlu diziyi tablodan ata
*/

#include <stdio.h>

void max_bul();

int main() {

    int ogrenci_not[4][5] = {1,67,76,55,0,
                            2,34,79,76,0,
                            3,56,68,57,0,
                            4,66,89,65,0};

    max_bul(ogrenci_not,4);                    
    return 0;
}

void max_bul(int dizi[][5], int size) {

    int i,j,average,toplam=0,max,id;
    for(i=0; i<4; i++) {
        for(j=1; j<4; j++) {
            toplam += dizi[i][j];
        }
        average = toplam/3; dizi[i][4] = average; average=0; toplam=0;
    }
    max=dizi[0][4];
    for(i=0; i<4; i++) {
        for(j=4; j<5; j++) {
            if(dizi[i][j]>max) {
                max=dizi[i][j]; id=i;
            }
        }
    }
    printf("max ort yapanin id = %d ve ort = %d",dizi[id][0],max);
}