#include <stdio.h>

int main() {

    int num1, num2, num3;

    printf("1.sayi = ");
    scanf("%d",&num1);

    printf("2.sayi = ");
    scanf("%d",&num2);

    printf("3.sayi = ");
    scanf("%d",&num3);

    if(num1>num2 && num1>num3) {
        printf("1.sayi buyuk = %d",num1);
    }
    else if(num2>num1 && num2>num3) {
        printf("2.sayi buyuk = %d",num2);
    } 
    else {
        printf("3.sayi buyuk = %d",num3);
    }
    return 0;
}