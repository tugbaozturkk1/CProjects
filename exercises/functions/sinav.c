#include <stdio.h>
void kontrol_et();
int main() {

    char metin1[100];
    char metin2[100];

    printf("kelimeleri sirayla gir = ");
    scanf("%s",metin1);
    scanf("%s",metin2);

    kontrol_et(metin1, metin2);
    return 0;
}

void kontrol_et(char kelime1[], char kelime2[]) {

    int i,j,harf_sayisi=0,uzunluk1=0,uzunluk2=0;
    for(i=0; kelime1[i]!='\0'; i++) {
        uzunluk1++;
    }
    for(j=0; kelime1[j]!='\0'; j++) {
        uzunluk2++;
    }    

    if(uzunluk1==uzunluk2) {
        for(i=0; kelime1[i]!='\0'; i++) {
            for(j=i; kelime1[j]!='\0'; j++) {
                if(kelime1[i] == kelime2[j]) {
                    harf_sayisi++;
                    break;
                }
            }
        }
        if(uzunluk1==harf_sayisi) {
            printf("ayni");
        }
        else {
            printf("farkli");
        }
    }
    else {
        printf("farkli");
    }

}