/*
    10 tabanindaki sayiyi kullanicidan aldigin tabana donustur
    yeni tabandaki dizi bir dizide saklanmali
*/
#include <stdio.h>

void decimal_to_binary();
void decimal_to_octal();
void decimal_to_hexadecimal();

int main() {

    int sayi,taban;

    printf("10'luk tabanda sayi gir = ");
    scanf("%d",&sayi);

    printf("hangi tabana donusturulsun? (1-binary(2)\n2-octal(8)\n3-hexadecimal(16))\n");
    scanf("%d",&taban);

    switch (taban)
    {
        case 1:
            decimal_to_binary(sayi);
            break;
        case 2:
            decimal_to_octal(sayi);
            break;
        case 3: 
            decimal_to_hexadecimal(sayi);
            break;
        default:
            printf("yanlis secim");
            break;
    }

    return 0;
}

void decimal_to_binary(int num) {

    if(num==1) {
        printf("%d",num);
    }
    else {
        decimal_to_binary(num/2);
        printf("%d",num%2);
    }
}

void decimal_to_octal(int num) {

    if(num<8) {
        printf("%d",num);
    }
    else {
        decimal_to_octal(num/8);
        printf("%d",num%8);
    }
}

void decimal_to_hexadecimal(int num) {

    if(num<16) {
        if(num<10) {
            printf("%d",num);
        }
        else {
            printf("%c",num-10+'A');
        }
    }
    else {
        decimal_to_hexadecimal(num/16);
        if(num%16<10) {
            printf("%d",num%16);
        }
        else {
            printf("c",num%16-10 + 'A');
        }
    }
}
