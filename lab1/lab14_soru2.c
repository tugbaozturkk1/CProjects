// 2 sayi arasi rastgele sayi uret

#include <stdio.h>
#include <stdlib.h>
 
void rastgele_sayi();

int main() {

    int num1,num2;

    printf("1.sayi = ");
    scanf("%d",&num1);
    printf("2.sayi = ");
    scanf("%d",&num2);

    rastgele_sayi(num1,num2);

    return 0;
}

void rastgele_sayi(int sayi1, int sayi2) {

    int i,rastgele_sayi;
    for(i=sayi1; i<sayi2; i++) {
        rastgele_sayi = sayi1 + rand() % (sayi2 - sayi1 + 1);
    }
    printf("%d",rastgele_sayi);
}