#include <stdio.h>

void main() {

    int A[10]={5,3,0,5,0,2,0,1,2,2};

    int *m, **k;
    m=A;
    printf("extra cikti m'in adresi = %d\n",m);
    printf("extra cikti a'nin adresi = %d\n",A);   
    printf("1.cikti = %d\n",*(m+1));

    *(m+2) += 3;
    m += 4 ;
    printf("2.cikti = deger %d ve adres %d\n",*(m+1),(m+1)); // deger 2 ve ilk adresten 20 bayt (4*5) ileri 

    m=&A[1];
    k=&m;
    printf("3.cikti = %d\n",*(*(k)+1)); // *(k) = m ve sonuc olarak m + 1 olur

    printf("4.cikti = %d\n",*k); // ilk adresten 4 bayt ileri

    m=m-1;
    printf("5.cikti = %d\n",*k); // ilk adres
}