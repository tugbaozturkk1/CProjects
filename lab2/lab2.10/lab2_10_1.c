/*
    ogrencilere ait no, isim, vize, final notunun tutuldugu notlar.txt isimli dosya
    pr menusu => 1-dosya olustur/veri gir
                 2-dosyadan oku/listele
                 3-gecme notu 60 ustu olanlari listele
                 4-dosyada gecme notu 60 ustu olanlari gecenler.txt, dusukleri de kalanlar.txt dosyasina yazdir
                 5-dosya boyutunu ekrana yazdir
    her bir menu secenegi bir fonks ile yapilacak
*/

#include <stdio.h>

void create_a_file();
void read_from_file();
void point_file();
void gecme_kalma();
void write_file_size();

int main() {

    FILE *file_ptr;
    int islem;
    printf("islem gir :\n1-dosyadan olurtur/veri gir\n"
            "2-dosyadan oku/listele\n"
            "3-gecme notu 60 ustu olanlari listele\n"
            "4-gecme notu=60 olanlari gecenler.txt, dusukleri de kalanlar.txt'ye yazdir\n"
            "5-dosya boyutunu ekrana yaz\n");
    scanf("%d",&islem);
    switch(islem) {
        case 1:
            create_a_file(file_ptr);
            break;    
        case 2:
            read_from_file(file_ptr);
            break;
        case 3:
            point_file(file_ptr);
            break;
        case 4:
            gecme_kalma(file_ptr);
            break;
        case 5:
            write_file_size(file_ptr);
            break;
        default:
            printf("gecersiz islem\n");
            break; 
    }
    return 0;
}

void create_a_file(FILE *ptr) {

    char name[15];
    int no, midterm, final;
    
    if((ptr=fopen("notlar.txt","w"))==NULL) {
        printf("dosya olusturulamadi\n");
    }
    else {
        printf("ogrencinin isim, no, vize, final gir : \n");
        scanf("%s%d%d%d",name,&no,&midterm,&final);
        while(!feof(stdin)) {  // cikis => ctrl + z
            fprintf(ptr,"%s    %d      %d     %d\n",name,no,midterm,final);
            scanf("%s%d%d%d",name,&no,&midterm,&final);
        }
    }
    fclose(ptr);
}

void read_from_file(FILE *ptr) {

    char name[15];
    int no, midterm, final;

    if((ptr=fopen("notlar.txt","r"))==NULL) {
        printf("dosya acilamadi");
    }
    else {
        printf("name            no      mid     final\n");
        fscanf(ptr,"%s%d%d%d", name, &no, &midterm, &final);
        while(!feof(ptr)) {
            printf("%-15s %-7d %-7d %-7d\n", name, no, midterm, final);
            fscanf(ptr,"%s%d%d%d", name, &no, &midterm, &final);
        }
        fclose(ptr);
    }
}

void point_file(FILE *ptr) {

    char name[15];
    int no, midterm, final, ort;

    if((ptr=fopen("notlar.txt","r"))==NULL) {
        printf("dosya acilamadi\n");
    }
    else {
        fscanf(ptr,"%s%d%d%d", name, &no, &midterm, &final);
        while(!feof(ptr)) {
            ort = ((midterm*4/10)+(final*6/10));
            if(ort>=60) {
                printf("%-15s %-7d %-7d %-7d\n",name,no,midterm,final);
            }
            fscanf(ptr,"%s%d%d%d", name, &no, &midterm, &final);
        }
        fclose(ptr);
    }
}

void gecme_kalma(FILE *ptr) {
    FILE *gecen, *kalan;
    char name[15];
    int no, midterm, final, ort;

    if((ptr=fopen("notlar.txt","r"))==NULL) {
        printf("dosya acilamadi\n");
    }
    else {
        fscanf(ptr,"%s%d%d%d",name,&no,&midterm,&final);
        while(!feof(ptr)) {
            ort = ((midterm*4/10)+(final*6/10));
            if(ort>=60) {
                if((gecen=fopen("gecenler.txt","a"))==NULL) {
                    printf("dosya acilamadi\n");
                }
                else {
                    fprintf(gecen,"%s    %d      %d     %d\n",name,no,midterm,final);
                }
            }
            else {
                if((kalan=fopen("kalanlar.txt","a"))==NULL) {
                    printf("dosya acilamadi\n");
                } 
                else {
                    fprintf(kalan,"%s    %d      %d     %d\n",name,no,midterm,final);
                }
            }
            fscanf(ptr,"%s%d%d%d", name, &no, &midterm, &final);
        }
        fclose(ptr);
        fclose(gecen);
    }
}

void write_file_size(FILE *ptr) {
    int size=0;
    if((ptr=fopen("notlar.txt","r"))==NULL) {
        printf("dosya acilamadi\n");
    }
    else {
        while(!feof(ptr)) {
            fgetc(ptr);
            size++;
        }
        fclose(ptr);
    }
    printf("dosyanin boyutu = %d\n",size);
}