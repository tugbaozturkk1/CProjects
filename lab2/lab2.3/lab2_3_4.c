// verilen dizi içindeki string ifadenin palindrom olup olmadigini rekursif fonks ile bul (tersten okunus ayni)

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/*
char func();

int main() {
    int boyut;
    char dizi[100];
    printf("kelime gir = ");
    scanf("%s",dizi);

    boyut=strlen(dizi);
    int yedek_boyut=boyut;
    if(func(dizi,boyut,yedek_boyut)==1) {
        printf("palindrom");
    }
    else {
        printf("palindrom degil");
    }
    
    return 0;
}

char func(char dizi[], int size, int yedek_boyut) {
    if(size>yedek_boyut/2) {
        if(dizi[size-1]==dizi[yedek_boyut-size]) {
            return func(dizi,size-1,yedek_boyut);
        }
        else {
            return 0;
        }
    }
    else {
        return 1;
    }
}
*/

// pointer ile yaz
int palindrom();
int main() {

    int length1=0,length2;
    char *p,dizi[100];

    printf("kelime gir = ");
    scanf("%s",dizi);

    for(p=dizi; *p; p++) {
        length1++;
    }
    p=dizi;
    printf("uzunluk = %d\n",length1);
    length2=length1;
    if(palindrom(p,length1-1,dizi,length2)==0) {
        printf("palindrom degil");
    }
    else {
        printf("palindrom");
    }


    return 0;
}

int palindrom(char *p, int len1, char dizi[], int len2) {

    if(len1>len2/2) {
        if(*p==dizi[len1]) {
            return palindrom(p+1,len1-1,dizi,len2);
        }
        else {
            return 0;
        }
    }
    else {
        return 1;
    }
}