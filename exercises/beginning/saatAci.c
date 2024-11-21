#include <stdio.h>

int main() {

    int saat,dakika;
    float saatAci,dakikaAci,saatIlerleme;

    printf("saat gir (0-11) = ");
    scanf("%d",&saat);

    printf("dakika gir (0-59) = ");
    scanf("%d",&dakika);

    dakikaAci = 6 * dakika;
    saatIlerleme = dakika / 2;
    saatAci = 30 * saat;

    printf("saat acisi = %.f\n",saatAci+saatIlerleme);
    printf("dakika acisi = %.f",dakikaAci);
    return 0;
}