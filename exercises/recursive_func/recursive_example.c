// verilen sayinin verilen kuvvvetini bulan rekursif fonks.
/*
#include <stdio.h>

int func();

int main() {
    int num1,num2,result;

    printf("sayilari gir  = ");
    scanf("%d %d",&num1,&num2);
    result = func(num1,num2);
    printf("%d sayisinin %d. kuvveti = %d",num1,num2,result);
    return 0;
}

int func(int sayi1,int sayi2) {

    if(sayi2>0) {
        return (sayi1*(func(sayi1,(sayi2-1))));
    }
    return 1;

}
*/

#include <stdio.h>

int main(){

    int a = 0b00100011; // 35 sayisi

    printf("%d",a);

    return 0;
}