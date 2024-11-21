/*
    Klavyeden girilen bir metnin içerisinde her harfin tekrar sayısını bularak 
    ekrana yazdıran programın c kodunu yazınız.
    Kelimenin tüm harflerinin büyük olduğunu varsayınız. 
    ASCII değeri A=65
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void tekrarli_harf_bul();

int main() {

    int boyut=0,i=0;
    char *p;
    p=(char *)malloc(10*sizeof(char));
    printf("metin gir = ");
    scanf("%s",p);
    while(*(p+i)!='\0') {
        boyut++; 
        i++;
    }

    tekrarli_harf_bul(p,boyut);
    free(p);
    return 0;
}

void tekrarli_harf_bul(char *p, int size) {

    int key[26] = {0};
    for(int i=0; i<size; i++) {
        int tekrar=0;
        char currentChar = *(p + i);
        int charIndex = currentChar - 'A';

        if(key[charIndex]==0) {
            for(int j=0; j<size; j++) {
                if(*(p+i)==*(p+j)) {
                    tekrar++;
                }
            }
            key[charIndex] = 1;
            printf("%c karakteri %d adet\n", currentChar, tekrar);
        }
    }
}