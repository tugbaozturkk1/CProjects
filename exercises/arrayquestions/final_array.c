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

int main() {

    int notlar[4][5] = {1,67,76,55,0,
                        2,34,79,76,0,
                        3,56,68,57,0,
                        4,66,89,65,0};
    int i,j,id;
    float average,max,toplam;

    for(i=0; i<4; i++) {
        average=0.0;
        toplam=0.0;
        for(j=1; j<4; j++) {
            toplam += notlar[i][j];
        }
        average = toplam/3;
        notlar[i][4] = average;
    }

    max = notlar[0][4];

    for(i=0; i<4; i++) {
        for(j=4; j<5; j++) {
            if(notlar[i][4] > max) {
                max = notlar[i][4];
                id = i;
            }
        }
    }
    
    printf("ortalamasi en yuksek olan ogrencinin id = %d ve ortalamasi = %f",notlar[id][0],max);

    return 0;
}