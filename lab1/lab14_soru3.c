// her kelimenin son harfini bul

#include <stdio.h>

void son_harfler();

int main() {

    char cumle[100];

    printf("cumle gir = ");
    scanf("%[^\n]",cumle);

    printf("son harfler = ");
    son_harfler(cumle);

    return 0;
}

void son_harfler(char metin[]) {

    int i;
    for(i=0; metin[i]!='\0'; i++) {
        if(metin[i+1]==' ' || metin[i+1]=='\0') {
            printf("%c",metin[i]);
        }
    }
} 