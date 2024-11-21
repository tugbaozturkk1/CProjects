/*
    Bir cümlenin kelimelerini sondan başa doğru yazan programı 
    dinamik bellek yönetimi kullanarak oluşturunuz
    example:
    Input: I love Programming Languages course
    Output: course Languages Programming love I
*/

#include<stdio.h>
#include<stdlib.h>
void cevir();
int main() {

    char *p=(char *)malloc(100*sizeof(char));
    int i=0,uzunluk=0;
    printf("cumle gir = ");
    scanf("%[^\n]",p);


    while(*(p+i)!='\0') {
        uzunluk++;
        i++;
    }
    
    p=realloc(p, (uzunluk+1)*sizeof(char));
    *(p+i)='\0';
    
    i=0;
    printf("uzunluk = %d\n",uzunluk);
    printf("cumle = ");
    while(*(p+i)!='\0') {
        printf("%c",*(p+i));
        i++;
    }
    printf("\n");
    cevir(p,uzunluk);
    free(p);
    return 0;
}

void cevir(char *p, int size) {

    int i,j,k,temp,start=0,end;
    
    for(i=0, j=size-1; i<=j; i++, j--) {
        temp = *(p+i);
        *(p+i) = *(p+j);
        *(p+j) = temp;
    }
    *(p+size)='\0';
    printf("ters cumle = ");
    for(i=0; i<size; i++) {
        printf("%c",*(p+i));
    }
    printf("\n");

    // kelimeleri ters cevir (sonuncu haric)

    for(i=0; *(p+i)!='\0'; i++) {
        if(*(p+i)==' ') {
            end=i-1;
            for(j=start, k=end; j<=k; j++, k--) {
                temp = *(p+j);
                *(p+j) = *(p+k);
                *(p+k) = temp;
            }
            start= i+1;
        }
    }

    // son kelimeyi cevir

    end=size-1;
    for(j=start, k=end; j<=k; j++, k--) {
        temp = *(p+j);
        *(p+j) = *(p+k);
        *(p+k) = temp;
    }

    for(i=0; i<size; i++) {
        printf("%c",*(p+i));
    }
}