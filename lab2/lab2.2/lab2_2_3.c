/*
    girilen dizideki max elemani rekursif bul
*/

#include <stdio.h>
/*
int maxEleman();

int main() {

    int boyut,i;
    printf("dizinin boyutunu gir = ");
    scanf("%d",&boyut);

    int dizi[boyut];

    for(i=0; i<boyut; i++) {
        printf("dizinin %d.elemani = ",i+1);
        scanf("%d",&dizi[i]);
    }
    printf("max eleman = %d",maxEleman(dizi,boyut,dizi[boyut-1]));
    return 0;
}

int maxEleman(int dizi[], int size, int max) {
   
   if(size==-1) {
        return max;
   }
   else {
        if(dizi[size-1]>max) {
            max=dizi[size-1];
        }
    return maxEleman(dizi,size-1,max);
   }
}
*/

// pointer ile bul

#include <stdlib.h>
int max_bul();
int main() {

    int *p,boyut,max;

    printf("boyut bilgisi gir = ");
    scanf("%d",&boyut);

    p=(int *)calloc(boyut,sizeof(int));

    printf("dizi elemanlarini gir = ");
    for(int i=0; i<boyut; i++) {
        scanf("%d",p+i);
    }
    printf("%d\n",*p); // ilk eleman
    printf("dizinin max elemani = %d",max_bul(p,boyut,*p));
    free(p);

    return 0;
}

int max_bul(int *p,int size, int max) {

    if(*p>max) {
        max=*p;
    }
    else if(size==0) {
        return max;
    }
    return max_bul(p+1,size-1,max);
}