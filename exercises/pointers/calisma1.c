/*
        1   2   3
    1   A   D   G
    2   B   E   H     ABCAH => 11 21 31 11 23
    3   C   F   I      kullanicidan sayisal sifre al kelimeye donustur
*/

#include <stdio.h>
char donustur();

int main() {

    int sifre,satir,sutun;
    printf("sifre gir (-1 cikis) = \n");
    scanf("%d",&sifre);

    while(sifre!=-1) {
        satir = (sifre-11)/10;
        sutun = (sifre-11)%10;
        printf("sifrenin metin hali = %c\n",donustur(satir,sutun));
        scanf("%d",&sifre);
    }

    return 0;
}

char donustur(int satir, int sutun) {

    char array[3][3] = {'A','D','G',
                        'B','E','H',
                        'C','F','I'};
    
    return array[satir][sutun];

}