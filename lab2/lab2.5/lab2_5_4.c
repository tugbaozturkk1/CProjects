/*
    sayi dizisini pointer ile tersten yazdirma
*/

#include <stdio.h>
#include <stdlib.h>

void terstenYazdir();

int main() {

    int *p;
    int eleman;

    printf("dizi kac elemanli olsun? = ");
    scanf("%d",&eleman);
    
    p=(int *)malloc(eleman*sizeof(int));
    
    printf("elemanlari gir = ");
    for(int i=0; i<eleman; i++) {
        scanf("%d",(p+i));
    }
    terstenYazdir(p,eleman);
    free(p);
    return 0;
}

void terstenYazdir(int *p, int size) {
    int i,j,temp;
    j=size-1;
    for(i=0; i<size/2; i++,j--) {
        temp=*(p+i);
        *(p+i)=*(p+j);
        *(p+j)=temp;
    }

    for(i=0; i<size; i++) {
        printf("%d ",*(p+i));
    }
}
