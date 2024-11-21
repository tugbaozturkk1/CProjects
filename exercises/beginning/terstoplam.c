// girilen sayinin tersinin 2 katinin 1/x + 1/y + 1/z olarak gir
#include <stdio.h>
int main() {

    int num,x,y,z;

    printf("sayi gir = ");
    scanf("%d",&num);
    x = num;
    y = num + 1;
    z = x * y;
    printf("1/%d + 1/%d + 1/%d",x,y,z);

    return 0;
}