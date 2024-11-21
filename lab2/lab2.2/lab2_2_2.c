/*
    n elemanli dizideki elemanlarin toplamini rekursif bulan fonks
*/
/*
#include <stdio.h>

int diziToplam();

int main() {

    int n,i;
    printf("dizinin eleman sayisini gir = ");
    scanf("%d",&n);

    int dizi[n];

    for(i=0; i<n; i++) {
        printf("dizinin %d. elemanini gir = ",i+1);
        scanf("%d",&dizi[i]);
    }

    printf("dizideki elemanlarin toplami = %d",diziToplam(dizi,n));

    return 0;
}

int diziToplam(int dizi[], int size) {

    if(size==1) {
        return dizi[0];
    }
    else {
        return dizi[size-1]+diziToplam(dizi,size-1);
    }

}
*/

// pointer ile yap 

#include <stdio.h>
#include <stdlib.h> 
int eleman_top();
int main() {
 
    int *p;
    int boyut;
    printf("boyut gir = ");
    scanf("%d",&boyut);
    
    p=(int *)malloc(sizeof(int)*boyut);
    
    printf("dizi elemanlarini gir = ");
    for(int i=0; i<boyut; i++) {
        scanf("%d",p+i);
    }
    
    printf("elemanlar toplami = %d\n",eleman_top(p,boyut));
    free(p);
    return 0;
}

int eleman_top(int *p, int size) {
    
    if(size==0) {
        return 0;
    }
    else {
        return *p + eleman_top(p+1,size-1);
    }
}