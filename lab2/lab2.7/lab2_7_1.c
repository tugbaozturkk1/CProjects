/*
    Kullanıcı tarafından istenilen sayıda girilen kelimeleri alfabetik olarak sıralayan 
    programı yazınız.
    Kısıtlar:
    1. Sıralama algoritması olarak “bubble sort” ve pointers kullanılmalıdır.
    2. Sıralama sırasında “strcmp” ve “strcpy” fonksiyonlarından faydalanılmalıdır.
    3. Dinamik hafıza yönetimi kullanılmalıdır.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void sirala();

int main() {

    int kelime_sayisi, i;
    char **p;
    printf("kac kelime olsun? = ");
    scanf("%d",&kelime_sayisi);

    p=(char **)malloc(kelime_sayisi*sizeof(char *));

    printf("kelimeleri gir = ");
    for(i=0; i<kelime_sayisi; i++) {
        *(p+i)=(char *)malloc(10*sizeof(char)); 
        printf("%d.kelime = ",i+1);
        scanf("%s",*(p+i));
    }

    sirala(p,kelime_sayisi);
    free(p);
    return 0;
}

void sirala(char **p, int kelime) {
    int i,j;
    char *temp;
    for(i=0; i<kelime; i++) {
        for(j=i+1; j<kelime; j++) {
            if(strcmp(p[i],p[j])>0) {
                temp=p[i];
                p[i] = p[j];
                p[j] = temp;
            }
        }
    }
    printf("siralanmis sekli =\n");
    for(i=0; i<kelime; i++) {
        printf("%s ",*(p+i));
        free(p[i]);
    }
}