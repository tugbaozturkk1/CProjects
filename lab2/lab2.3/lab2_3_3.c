// verilen sayinin binary halini bulan rekursif fonks

#include <stdio.h>
#include <stdlib.h>
/*
void func();

int main() {

    int sayi;
    printf("sayi gir = ");
    scanf("%d",&sayi);
    func(sayi);

    return 0;
}

void func(int num) {
    
    if(num==1) {
        printf("%d",num);
    }
    else {
        func(num/2);
        printf("%d",num%2);
    }
}
*/
// pointer ile yazimi
void decimal_to_binary();
int main() {

    int sayi;
    int *p=&sayi;

    printf("sayi gir = ");
    scanf("%d",&sayi);

    printf("sayinin binary hali = ");
    decimal_to_binary(*p);

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