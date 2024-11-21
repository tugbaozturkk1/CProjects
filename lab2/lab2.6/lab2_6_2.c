/*
    dinamik bellek ayırma ile max sayiyi bul 
    dizi boyutu kullanicidan
    dizi elemanlari kullanicidan
*/

#include <stdio.h>
#include <stdlib.h>

void max_bul();

int main() {

    int *ptr;
    int eleman,i;

    printf("eleman sayisi gir = ");
    scanf("%d",&eleman);

    ptr=(int *)malloc(eleman*sizeof(int));

    for(i=0; i<eleman; i++) {
        scanf("%d",ptr+i);
    }

    max_bul(ptr,eleman);
    free(ptr);
    return 0;
}

void max_bul(int *p, int size) {
    int i,max;
    max=*p;
    for(i=0; i<size; i++) {
        if(*(p+i)>max) {
            max = *(p+i);
        }
    }
    printf("dizideki max eleman = %d",max);
}