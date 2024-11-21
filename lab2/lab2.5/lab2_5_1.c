#include<stdio.h>
void printVal(int *p) {
    printf("%d\n",*p);
}
int main() {

    int i=10, *p=&i;
   // printf("%d\n",&i); // i'nin adresi 
   // printf("%d\n",&p); // p pointerinin adresi
   // printf("%d\n",p);   // p nin icindeki adres
   // printf("%d\n",*p);   // p nin icindeki adresin degeri
    printVal(p);
    printVal(++p);
    

    return 0;
}
