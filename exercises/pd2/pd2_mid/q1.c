/*
    Adınızı bir karakter katarı (string) olarak kaydetmek için gerekli bellek alanını dinamik bellek
    yapısı ile ayırınız. Bu bellek alanına adınızın harflerini kod içerisinde atayınız (Bu adımda isminizi
    dışarıdan okuma yapmayınız). Daha sonra öğrenci numaranızın basamakları toplamını bulunuz
    ve bulduğunuz bu değer kadar bellek alanınızı genişletiniz. Genişletilen bu alana isminizi tekrarlı
    bir şekilde atayınız.
*/

#include <stdio.h>
#include <stdlib.h>

char *strcat();
char *strcpy();

unsigned long no_bas_top();

int main() {
    int i;
    unsigned long no = 2210205035,toplam;
    char *p=(char *)malloc(6*sizeof(char)); // null icin +1  (char *)calloc(6,sizeof(char))
    strcpy(p,"Tugba");
    printf("ad = %s\n",p);

    toplam=no_bas_top(no);
    printf("no basamak toplami = %u\n",toplam);

    p=(char *)realloc(p,toplam*sizeof(char)); 
    for(i=1; i<toplam/6 ; i++) {  // tugba\0 => 5+1=6
        strcat(p,"tugba");          // i=1 zaten ilk isim yazili, son yazimda \0'a yer kalmaz o yuzden hata verir
    }

    printf("yeni hal = %s",p);

    free(p);
    return 0;
}

unsigned long no_bas_top(unsigned long num) {

    if(num==0) {
        return 0;
    }
    else {
        return (num%10)+no_bas_top(num/10);
    }
}

char *strcpy(char *str1, const char *name) {

   /* char *p=str1;
    while(*name) {
        *p++ = *name++;
    }
    *p = '\0';
    return str1;*/

    while(*name) {
        *str1++ = *name++;
    }
    *str1='\0';
    return str1;
}

char *strcat(char *str1, const char *str2) {

    while(*str1) {
        str1++;
    }
    while(*str2) {
        *str1++ = *str2++;
    }
    *str1='\0';
    return str1;
}