// dizi elemanlarinin ortalamasini rekursif bulan fonks

#include<stdio.h>
#include <stdlib.h>

/*
float func();

int main() {

    int dizi[6] = {1,2,3,4,5,6};

    printf("dizinin elemanlarinin ortalamasi = %f",func(dizi,6)/6);

    return 0;
}

float func(int dizi[], int size) {

    if(size==0) {
        return 0;
    }
    else {
        return dizi[size-1]+func(dizi,size-1);
    }
}
*/
float ort();
int main() {

    int *p,boyut;

    printf("boyut gir = ");
    scanf("%d",&boyut);

    p=(int *)calloc(boyut,sizeof(int));

    printf("elemanlar = ");
    for(int i=0; i<boyut; i++) {
        scanf("%d",p+i);
    }

    printf("dizi elemanlarinin ortalamasi = %.2f",ort(p,boyut)/boyut);

    free(p);

    return 0;
}

float ort(int *p, int size) {

    if(size==1) {
        return *p;
    }
    else {
        return *p + ort(p+1,size-1);
    }
}