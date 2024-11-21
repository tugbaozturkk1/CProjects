/*
    m uzunlugundaki sayi dizisinde en az x kere tekrar eden sayilar
    en fazla tekrar eden sayi 
    x, m, sayi dizisini kullanici girecek
*/

#include <stdio.h>
#include <stdlib.h>

void x_kere_tekrar();
void max_tekrar();

int main() {

    int *ptr,m,x;

    printf("dizinin boyutunu gir = ");
    scanf("%d",&m);

    printf("en az kac kere tekrar eden sayilar gösterilsin? = ");
    scanf("%d",&x);

    ptr = (int *)malloc(m*sizeof(int));

    printf("dizinin elemanlarini gir = ");
    for(int i=0; i<m; i++) {
        scanf("%d",ptr+i);
    }
    printf("en az x = %d kere tekrar eden sayilar = \n",x);
    x_kere_tekrar(ptr,m,x);

    printf("--------------\n");

    max_tekrar(ptr,m);
    free(ptr);
    return 0;
}

void x_kere_tekrar(int arr[], int size, int xtekrar) {
    int *kontrol=(int *)calloc(size,sizeof(int));
    int j,i,tekrar=0;
    for(i=0; i<size; i++) {
        if(kontrol[i]==0) {
            tekrar=1;
            for(j=i+1; j<size; j++) {
                if(arr[i]==arr[j]) {
                    tekrar++;
                    kontrol[j]=1;
                }
            }
            if (tekrar >= xtekrar) {
                printf("%d sayisi %d kere tekrar etti\n", arr[i], tekrar);
            }
        }
    }
}

void max_tekrar(int arr[], int size) {

    int i,j,max_tekrar,tekrar,max_tekrarli_eleman;
    max_tekrar=0;
    for(i=0; i<size; i++) {
        tekrar=0;
        for(j=0; j<size; j++) {
            if(arr[i]==arr[j]) {
                tekrar++;
            }
        }
        if(tekrar>max_tekrar) {
            max_tekrar=tekrar;
            max_tekrarli_eleman=arr[i];
        }
    }
    printf("en cok tekrar eden eleman %d ve %d kere tekrar etti",max_tekrarli_eleman,max_tekrar);
}