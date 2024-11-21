#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*
void arttir(int);
int main() {

    int i;
    i=5;
    printf("oncesi %d\n",i); //5
    arttir(i);
    printf("sonrasi %d\n",i); //5

    return 0;
}

void arttir(int k) {
    k++;
    printf("fonks icinde %d\n",k); //6
}
*/
// pointer ile 
/*
void arttir(int *);
int main() {
    // adres ile global olarak degeri degistirirsin
    int i;
    i=5;
    printf("oncesi %d\n",i); //5
    arttir(&i);
    printf("sonrasi %d\n",i); //6

    return 0;
}

void arttir(int *k) {
    (*k)++;
    printf("fonks icinde %d\n",*k); //6
}
*/
/*
int bolme_islemi();
int main() {
    
    int bolunen, bolen;
    int bolum, kalan;

    bolunen=13;
    bolen=4;
    bolum=bolme_islemi(bolunen, bolen, &kalan);
    printf("bolum = %d kalan = %d\n",bolum,kalan);

    return 0;
}

int bolme_islemi(int bolunen, int bolen, int *kalan) {
    *kalan=bolunen%bolen;
    return bolunen/bolen;
}
*/


/*
int main()

{

    int *cptr = calloc(10, sizeof(int)); // sizeof (int) değer olarak 4 byte döner.. 4 * 10 = 40 byte

    for(int i=0; i<10; ++i){

        printf("cptr[%d] = %d\n", i, cptr[i]);
    }

    return 0;

}*/
/*
int main() {

    int n, i, *ptr, sum=0;
    printf("eleman sayisi gir = ");
    scanf("%d",&n);

    ptr=(int *)malloc(n*sizeof(int));

    if(ptr==NULL) {
        printf("yetersiz alan\n");
    }
    else {
        printf("alan malloc fonks ile ayrildi\n");
    }

    printf("dizi elemanlarini gir = ");
    for(i=0; i<n; i++) {
        scanf("%d",ptr+i);
        sum += *(ptr+i);
    }

    printf("toplam = %d",sum);
    free(ptr);
    return 0;
}
*/
/*
int *dizi_birlestir();
int main() {

    int dizi1[5]={1,2,3,4,5}, dizi2[4]={6,7,8,9};
    int *ptr;

    ptr=dizi_birlestir(dizi1,5,dizi2,4);

    for(int i=0; i<9; i++) {
        printf("%d ",*(ptr+i));
    }

    return 0;
}

int *dizi_birlestir(int arr1[], int size1, int arr2[], int size2) {

    int *son_dizi = (int *)malloc((size1+size2)*sizeof(int));
    static int i;
    for(i=0; i<size1; i++) {
        *(son_dizi+i) = arr1[i];
    }
    for(int k=0; k<size2; k++) {
        son_dizi[i+k] = arr2[k];
    }
    return son_dizi;
}*/
/*
int main() {
   
    char *p;
    char arr[100];
    int i;
    p=arr;
    while(1) {
        scanf("%c",p+i);
        if(*(p+i)=='\n') {
            break;
        }
        printf("*");
        i++;
    }
    return 0;
}*/
/*
int main() {
    
    void *a;
    a=(char *)malloc(6);
    strcpy((char *)a,"12345");
    printf("%s\n",a);
    free(a);

    a=(double *)malloc(sizeof(double));
    *(double *)a=3.123;
    printf("%.3f\n",*(double *)a);

    return 0;   
}
*/
/*
int main() {
    int r=5;
    int ***m,**k,*p;
    m=&k;
    k=&p;
    p=&r;
    printf("***m=%d ve r = %d ve &r = %d\n",***m,r,&r);
    printf("**m = %d ve *k = %d\n",**m,*k);
    printf("*m = %d ve p = %d\n", *m, p);
    printf("m = %d",m);

    return 0;
}
*/
/*
int main() {
    char *a="1234567890";
    char x[10];
    char *p1, *p2;
    printf("%s\n",a);
    p1 = a;
    p2 = x;
    while(*p1!='\0') {
        *p2 = *p1;
        p1++;
        p2++;
    }
    *p2 = *p1;
    printf("%s\n",x);
    return 0;
}
*/
/*
void main() {
    char *p;
    p=(char *)malloc(10*sizeof(char));
    scanf("%s",p);
    printf("%s\n",p);
    int *x;
    scanf("%d",x);
    printf("%d",*x);
}
*/