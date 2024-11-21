// sesli harfleri * ile degistir

#include <stdio.h>

void sesli_degisim();

int main() {

    char cumle[100];
    printf("cumle gir = ");
    scanf("%[^\n]",cumle);
    sesli_degisim(cumle,100);
    printf("yeni cumle = %s",cumle);

    return 0;
}

void sesli_degisim(char metin[], int size) {

    char sesliler[10] = {'a','e','i','o','u','A','E','I','O','U'};
    int i,j;

    for(i=0; i<size; i++) {
        for(j=0; j<10; j++) {
            if(metin[i]==sesliler[j]) {
                metin[i] = '*';
            }
        }
    }
}