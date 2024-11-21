/*
    2 dosya ac
    dosya iceriklerini karsilastir
*/

#include <stdio.h>
#include <stdlib.h>

struct ogrenci {
    char name[15];
};
typedef struct ogrenci ogr;

int main() {

    FILE *fP1, *fP2;
    char dosya1, dosya2;
    ogr ogr1 = {""};
    ogr ogr2 = {""};
    printf("3 kisilik kayit al\n");
    if((fP1=fopen("dosya1.dat","w"))==NULL) {
        printf("dosya1 olusturulamadi\n");
        exit(1);
    }
    else {
        for(int i=0; i<3; i++) {
            fwrite(&ogr1, sizeof(ogr), 1, fP1);
        }
        fclose(fP1);
    }

    if((fP2=fopen("dosya2.dat","w"))==NULL) {
        printf("dosya2 olusturulamadi\n");
        exit(1);
    }
    else {
        for(int i=0; i<3; i++) {
            fwrite(&ogr2, sizeof(ogr), 1, fP2);
        }
        fclose(fP2);
    }

    if((fP1=fopen("dosya1.dat","r+"))==NULL) {
        printf("dosya1 acilamadi\n");
        exit(1);
    }
    else {
        printf("isim gir\n");
        for(int i=0; i<3; i++) {
            fscanf(stdin, "%s", ogr1.name);
            fseek(fP1, i*sizeof(ogr), SEEK_SET);
            fwrite(&ogr1, sizeof(ogr), 1, fP1);
        }
        fclose(fP1);
    }
    
    if((fP2=fopen("dosya2.dat","r+"))==NULL) {
        printf("dosya2 acilamadi\n");
        exit(1);
    }
    else {
        printf("isim gir\n");
        for(int i=0; i<3; i++) {
            fscanf(stdin, "%s", ogr2.name);
            fseek(fP2, i*sizeof(ogr), SEEK_SET);
            fwrite(&ogr2, sizeof(ogr), 1, fP2);
        }
        fclose(fP2);
    }

    if((fP1=fopen("dosya1.dat","r"))==NULL) {
        printf("dosya1 acilamadi\n");
    }
    if((fP2=fopen("dosya2.dat","r"))==NULL) {
        printf("dosya2 acilamadi\n");
    }

    while(!feof(fP1) && !feof(fP2)) {
        if(fgetc(fP1)!=fgetc(fP2)) {
            printf("dosyalar farklidir\n");
            exit(1);
        }
    }
    printf("dosyalar ayni\n");
    fclose(fP1); fclose(fP2);
    return 0;
}