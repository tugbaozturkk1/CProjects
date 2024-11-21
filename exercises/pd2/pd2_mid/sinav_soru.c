#include <stdio.h>
/*
int fun(int n, int a, int b) {

    if(n>=15) {
        return;
    }
    else {
        fun(n+3,a+b,b-n);
        printf("%d %d %d\n",n,a,b);
    }
}

int main() {

    fun(1,8,27);
}
*/
/*
#include <stdlib.h>
int main() {

    int i,j=0,test,**p,n;

    scanf("%d",&n);
    p=(int **)malloc(n*sizeof(int *));
    while(n!=0) {
        scanf("%d",&test);
        *p=realloc(*p,(test+1)*sizeof(int *));
        *(*p+j)=test;
        for(i=1; i<=test; i++) {
            scanf("%d",(*p+i));
        }
        n--; j++;
    }
    free(p);
    return 0;

    /*
   **************chat-gpt duzeltmesi***************
    #include <stdio.h>
#include <stdlib.h>

int main() {
    int i, j = 0, test, **p, n;

    scanf("%d", &n);
    p = (int **)malloc(n * sizeof(int *));
    for (j = 0; j < n; j++) {
        scanf("%d", &test);
        p[j] = (int *)malloc((test + 1) * sizeof(int));  // Her alt dizi için bellek ayırıyoruz
        p[j][0] = test;  // İlk eleman olarak 'test' değerini saklayın
        for (i = 1; i <= test; i++) {
            scanf("%d", &p[j][i]);  // Dizinin elemanlarını okuyun
        }
    }
    // Belleği temizleyin
    for (j = 0; j < n; j++) {
        free(p[j]);  // Her alt diziyi serbest bırakın
    }
    free(p);  // Ana dizi işaretçisini serbest bırakın
    return 0;
}
}
*/

int binary_to_decimal();
int main() {
    int sayi;
    printf("ikilik tabanda bir sayi gir : ");
    scanf("%d",&sayi);
    printf("sayinin onluk hali = %d\n",binary_to_decimal(sayi));
    return 0;
}

int binary_to_decimal(int num) {
    static int sonuc=0, i=0;
    int sayi,us;
    if(num<1) {
        return sonuc;
    }
    else {
        sayi=num%10;
        for(int j=0; j<=i; j++) {
            if(j==0) {
                us = 1;
            }
            else {
                us *= 2;
            }
        }
        sonuc+=sayi*us;
        i++;
        return binary_to_decimal(num/10);
    }
}