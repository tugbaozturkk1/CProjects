/*
    ogrenci listesinde isme gore arama yap
*/

#include <stdio.h>
#include <string.h>

struct student {
    char name[15];
};

char isim_ara();

int main() {

    char aranan_isim[15];
    struct student students[5];

    printf("isimleri gir : ");
    for(int i=0; i<5; i++) {
        scanf("%s",students[i].name);
    }

    printf("listede aranacak ismi gir : ");
    scanf("%s",aranan_isim);

    // printf("%s",aranan_isim);

    if(isim_ara(aranan_isim,students)==1) {
        printf("isim listede");
    }
    else {
        printf("isim listede yok");
    }
    
    return 0;
}

char isim_ara(char isim[], struct student *ogrenciler) {
    for(int i=0; i<5; i++) {
        if(strcmp(isim,ogrenciler[i].name)==0) {
            return 1;
        }
    }
    return 0;
}