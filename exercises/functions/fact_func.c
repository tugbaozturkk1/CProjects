#include <stdio.h>

int fact(int); // function prototype

int main() {

    int sayi;

    printf("sayi gir = ");
    scanf("%d",&sayi);

    printf("sayinin faktoriyeli = %d",fact(sayi));


    return 0; 
}

int fact(int x) {       // function

    int fact=1,i;

    for(i=1; i<=x; i++) {
        fact *= i;
    }
    return fact;
}