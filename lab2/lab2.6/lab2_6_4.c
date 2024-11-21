/*
    pointer ile dizi tanimla
    dizi boyutu kullanicidan
    dizi elemanlari kullanicidan
    yeni alan ac
    yeni elemanlari al kullanicidan
    yeni elemanlari bas
*/

#include <stdio.h>
#include <stdlib.h>

int main() {
    int *p,boyut,i;

    printf("boyut gir = ");
    scanf("%d",&boyut);

    p=(int *)malloc(boyut*sizeof(int));

    printf("elemanlari gir = ");
    for(i=0; i<boyut; i++) {
        scanf("%d",p+i);
    }

    printf("yeni boyut gir = ");
    scanf("%d",&boyut);
    p = realloc(p, boyut * sizeof(int));
    printf("yeni elemanlari gir = ");
    for(i=0; i<boyut; i++) {
        scanf("%d",p+i);
    }

    for(i=0; i<boyut; i++) {
        printf("%d\n",*(p+i));
    }
    return 0;
}