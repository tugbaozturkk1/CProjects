#include <stdio.h>

int main() {

    int num=0, bas=0, oncekiBas=0, sonuc=0;

    printf("enter your st number = ");
    scanf("%d",&num);

    while(num>0) {
        bas = num %10;
        sonuc==0?sonuc=bas<oncekiBas?1:0:0;
        oncekiBas = bas;
        num = num / 10;
    }
    printf(sonuc==0?"True":"False");
    return 0;
}