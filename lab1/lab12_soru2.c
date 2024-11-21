// alfabetik siraya koyma

#include <stdio.h>

int main() {

    char metin[100];
    char temp;
    int i,j;

    printf("metin gir = ");
    scanf("%[^\n]",metin);

    for(i=0; metin[i]!='\0'; i++) {
        for(j=i+1; metin[j]!='\0'; j++) {
            if( metin[i] > metin[j] ) {
                temp = metin[i];
                metin[i] = metin[j];
                metin[j] = temp;
            }
        }
    }

    printf("alfabetik sira = %s",metin);
    return 0;
}