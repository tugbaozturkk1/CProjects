#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct student {
    int no, midterm, final;
    char name[15];
    struct student *next;
};

typedef struct student ogr; // ogr = ogrenci
ogr *head, *yeni_dugum, *eski_dugum;

void yeni_kayit_ekleme();
void en_basarili_bul();
void ogr_ort_hesapla();

int main() {
    int islem;
    printf("yapilabilecek islemeler : 1-yeni kayit ekle\n2-kayit listele\n3-kayit guncelle\n4-kayit sil\n5-sinif ort hesapla\n6-ort'a gore en basarili ogrenciyi bul ");
    scanf("%d",&islem);
    switch(islem) {
        case 1: 
            yeni_kayit_ekleme();
            en_basarili_bul();
            break;
        default :
            printf("gecersiz islem");
            break;
    }
    return 0;
}

void yeni_kayit_ekleme() {
    ogr *yeni_dugum;
    int kayit_no, kayit_sayisi, i;
    printf("kac kayit girilecek? : ");
    scanf("%d",&kayit_sayisi);
    for(i=0; i<kayit_sayisi; i++) {
        if(i==0) {
            head = (ogr*)malloc(sizeof(ogr));
            yeni_dugum=head;
        }
        else {
            yeni_dugum->next = (ogr*)malloc(sizeof(ogr));
            yeni_dugum = yeni_dugum->next;
        }
        printf("ad : ");
        scanf("%s",yeni_dugum->name);
        printf("no : ");
        scanf("%d",&yeni_dugum->no);
        printf("vize : ");
        scanf("%d",&yeni_dugum->midterm);
        printf("final : ");
        scanf("%d",&yeni_dugum->final);
    }
    yeni_dugum->next = NULL;
}

void en_basarili_bul() {
    char name[15];
    float ort, temp;
    int temp_no;
    ogr *yeni_dugum;
    yeni_dugum=head;
    temp = ((yeni_dugum->midterm)*4/10)+((yeni_dugum->final)*6/10);
    temp_no = yeni_dugum->no;
    while(yeni_dugum!=NULL) {
        ort = ((yeni_dugum->midterm)*4/10)+((yeni_dugum->final)*6/10);
        if(ort>temp) {
            temp = ort;
            temp_no = yeni_dugum->no;
            strcpy(name,yeni_dugum->name);
        }
        yeni_dugum = yeni_dugum->next;
    }
    printf("en basarili %f ort ile %d nolu %s adli ogrenci\n",temp,temp_no,name);
}