/*
    bir kelimenin harflerini tersten ekrana basan program
*/

#include <stdio.h>
#include <stdlib.h>
void ters_cevir();
int main() {

    char *p;
    p=(char *)calloc(15,sizeof(char));
    int uzunluk=0,i=0;

    printf("kelime gir = ");
    scanf("%s",p);

    while(*(p+i)!='\0') {
        uzunluk++;
        i++;
    }
    if(uzunluk>15) {
        printf("sinir asildi");
        return 0;
    }

    printf("uzunluk = %d\n",uzunluk);
    ters_cevir(p,uzunluk);
    free(p);
    return 0;
}

void ters_cevir(char *p, int size) {
    for(int i=0; i<size/2; i++) {
        char temp=*(p+i);
        *(p+i) = p[size-1-i];
        p[size-1-i] = temp;
    }
    printf("kelimenin ters hali = ");
    for(int i=0; i<size; i++) {
        printf("%c",*(p+i));
    }
}