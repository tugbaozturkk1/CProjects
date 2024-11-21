#include <stdio.h>

int main() {

    double *m,**k,myArray[5]={1.0,2.0,3.0,4.0,5.0};

    m=myArray;
    printf("%x\n",m);
    
    printf("%.1f\n",*(m+1));
    *(m+3) += 3.86;
    m+=2;
    printf("%.1f\n",*(m+1));

    m=&myArray[3];
    k=&m;
    printf("%.1f\n",*(*(k)-1));   //3.0 k işaretçisinden elde edilen işaretçinin (m) 1 birim geriye gitmesiyle elde edilen değer (myArray[2])
    printf("%.1f\n",((*(*(k))-1)));  // 6.9  *(*(k)) ifadesi myArray[3]'ü gösterir ve -1 ifadesi bu değerden 1 çıkarır
    printf("%x\n",k);

    m=m-1;
    printf("%x\n",m);

    return 0;
}