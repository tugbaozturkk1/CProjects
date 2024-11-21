// dizi elemanlarini kucukten buyuge sirala ve ortanca bul
/*
#include<stdio.h>

void sirala();
int ortancaBul();

int main() {
    int eleman;
    int array[100];

    printf("dizi kac elemanli olsun? = ");
    scanf("%d",&eleman);
    printf("dizi elemanlarini gir = ");

    for(int i=0; i<eleman; i++) {
        scanf("%d",&array[i]);
    }

    printf("dizinin kucukten buyuge siralanmis hali = ");
    sirala(array,eleman);
    printf("\ndizinin ortancasi = %d",ortancaBul(array,eleman));
    return 0;
}

void sirala(int dizi[], int size) {

    for(int i=0; i<size; i++) {
        for(int j=0; j<size; j++) {
            if(dizi[j]>dizi[j+1]) {
                int temp=dizi[j+1];
                dizi[j+1] = dizi[j];
                dizi[j] = temp;
            }
        }
    }

    for(int j=0; j<size; j++) {
        printf("%d ",dizi[j]);
    }
}

int ortancaBul(int dizi[], int size) {

    if(size%2==0) {
        return (dizi[size/2] + dizi[size/2-1])/2;
    }
    else {
        return dizi[size/2];
    }

}
*/
// ayni islemi rekursif yap

#include<stdio.h>

void sirala();
int ortancaBul();

int main() {

    int eleman;
    int array[100];

    printf("dizi kac elemanli olsun? = ");
    scanf("%d",&eleman);
    
    printf("dizi elemanlarini gir = ");
    for(int i=0; i<eleman; i++) {
        scanf("%d",&array[i]);
    }

    sirala(array,0,eleman-1);
    printf("dizinin kucukten buyuge siralanmis hali = ");
    for(int i=0; i<eleman; i++) {
        printf("%d ",array[i]);
    }

    printf("\ndizinin ortancasi = %d",ortancaBul(array,eleman));
    return 0;
}

void sirala(int dizi[], int baslangic, int son) {

    if(baslangic<son) {
        int minIndex=baslangic;
        for(int i=baslangic+1; i<=son; i++) {
            if(dizi[i]<dizi[minIndex]) {
                minIndex = i;
            }
        }
        int temp=dizi[baslangic];
        dizi[baslangic] = dizi[minIndex];
        dizi[minIndex] = temp;
        sirala(dizi,baslangic+1,son);
    }
}

int ortancaBul(int dizi[], int size) {

    if(size%2==0) {
        return (dizi[size/2] + dizi[size/2-1])/2;
    }
    else {
        return dizi[size/2];
    }

}