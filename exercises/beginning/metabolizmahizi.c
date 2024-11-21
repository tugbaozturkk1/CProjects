#include <stdio.h>

int main() {

    int yas;
    float boy,kilo,bmh;
    char cinsiyet;

    printf("kilonuz (kg) = ");
    scanf("%f",&kilo);

    printf("yasiniz = ");
    scanf("%d",&yas);

    printf("cinsiyet = ");
    scanf("%s",&cinsiyet);    

    printf("boyunuz (cm) = ");
    scanf("%f",&boy);

    if(cinsiyet=='e') {
        bmh = 66.473 + (13.7516 * kilo) + (5.0033 * boy) - (6.775 * yas) ;
        printf("metabolizma hiziniz = %f",bmh);
    }
    else if(cinsiyet=='k') {
        bmh = 655.0955 + (9.5634 * kilo) + (1.8496 * boy) - (4.6756 * yas);
        printf("metabolizma hiziniz = %f",bmh);       
    }
    else {
        printf("yanlis girdiniz");
    }

    return 0;
}