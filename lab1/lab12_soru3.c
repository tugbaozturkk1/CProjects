// kelimede kac sesli harf var 

#include <stdio.h>

int main() {

    char kelime[100];
    char sesli[] = {'a','e','i','o','u'};
    int i,j,sesli_sayisi=0;

    printf("kelime gir = ");
    scanf("%s",kelime);

    for(i=0; kelime[i]!='\0'; i++) {
        for(j=0; j<5; j++) {
            if(kelime[i]==sesli[j]) {
                sesli_sayisi++;
            }
        }
    }
    printf("%d",sesli_sayisi);

    return 0;
}