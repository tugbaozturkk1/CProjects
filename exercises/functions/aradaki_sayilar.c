// girilen 2 sayi dahil arada kalan sayilarin toplami
#include <stdio.h>

void aradaki_sayilar();

int main() {

    int num1,num2;

    printf("1.sayi = ");
    scanf("%d",&num1);
    printf("2.sayi = ");
    scanf("%d",&num2);
    if(num1==num2) {
        while(num1==num2) {
            printf("2.sayi = ");
            scanf("%d",&num2);
        }
    }
    aradaki_sayilar(num1,num2);
    return 0;
}
void aradaki_sayilar(int sayi1, int sayi2) {

    int i,toplam=0;
    if(sayi1>sayi2) {
        for(i=sayi2; i<=sayi1; i++) {
            toplam += i;
        }
    }
    else {
        for(i=sayi1; i<=sayi2; i++) {
            toplam += i;
        }   
    }
    printf("%d",toplam);
}