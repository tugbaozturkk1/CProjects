#include <stdio.h>

int main() {
    char *a[10] = {"hi","hello","how"};  // pointer 8 byte * 10 eleman = 80
    char b;
    char *p;
    int y;
    int *x;
    int *dizi[10];
    printf("%d\n",sizeof(a));
    printf("%d\n",sizeof(b));
    printf("%d\n",sizeof(p));
    printf("%d\n",sizeof(x));
    printf("%d\n",sizeof(y));
    printf("%d\n",sizeof(dizi));
}
