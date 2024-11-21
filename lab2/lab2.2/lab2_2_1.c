/*
    kullanicidan x ve y tamsayısı al
    obeb'ini bul (rekursif)
*/

#include<stdio.h>

int obebBul();

int main() {

    int x,y;
    printf("sayilari giriniz = ");
    scanf("%d%d",&x,&y);
    printf("sayilarin obeb'i = %d",obebBul(x,y));

    return 0;
}

int obebBul(int num1, int num2) {

    if(num2==0) {
        return num1;
    }
    else {
        return obebBul(num2, num1%num2);
    }
}