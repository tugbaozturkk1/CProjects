#include <stdio.h>
/*
int main() {
    int a,b,c;
    char *p=0;
    int *q=0;
    double *s=0;
    a=(p+3); // char *p türündeki bir pointer'a 3 ekliyor ve sonucu int türüne dönüştürüp a değişkenine atıyor.
    b=(q+2);
    c=(s+1);
    printf("%d %d %d",a,b,c);  // 3 8 8 
}
*/
/*
void printVal(int *p) {
    printf("%d\n",*p);  
    printf("%d\n",p);  
}
int main() {
    int i=10, *p=&i;
    printf("%d\n",p); // p'nin adresi
    printVal(p++);    // 10
    printVal(++p);    // bir sonraki bayttaki deger = cop deger
    printf("%d\n",*p);
}
*/
/*
int main() {
    int *ptr, a=10;
    ptr=&a;
    *ptr+=1;
    printf("%d,%d\n",*ptr,a);
}
*/

int main() {
    int *a,b[100]={2,3,54,9,45,7,89,556,44,777,7,7,7,5,5,7};
    a=b;
    printf("%x\n",a);
    printf("%x\n",&a[1]);
    printf("%x\n",&a[2]);
    printf("%x\n",&a[3]);
    printf("%d",sizeof(*a));
    return 0;
}