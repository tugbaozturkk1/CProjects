// carpma operatoru kullanmadan

#include <stdio.h>

int main() {

    int num1,num2,sonuc=0,i;

    printf("ilk sayi = ");
    scanf("%d",&num1);

    printf("ikinci sayi = ");
    scanf("%d",&num2);

    for(i=1; i<=num1 ;i++) {
        sonuc += num2;
    }

    printf("carpim = %d",sonuc);

    return 0;
}