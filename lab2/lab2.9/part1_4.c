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
void sinif_ort_hesapla();

int main() {
    int islem;
    printf("yapilabilecek islemeler : 1-yeni kayit ekle\n2-kayit listele\n3-kayit guncelle\n4-kayit sil\n5-sinif ort hesapla\n6-ort'a gore en basarili ogrenciyi bul ");
    scanf("%d",&islem);
    switch(islem) {
        case 1: 
            yeni_kayit_ekleme();
            break;
        case 2:
            yeni_kayit_ekleme();
            sinif_ort_hesapla();
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

void sinif_ort_hesapla() {
    int i=0;
    float toplam=0.0;
    ogr *yeni_dugum;
    yeni_dugum=head;
    while(yeni_dugum!=NULL) {
        toplam += ((yeni_dugum->midterm)*4/10)+((yeni_dugum->final)*6/10);
        i++;
        yeni_dugum = yeni_dugum -> next;
    }
    printf("ortalama : %f\n",toplam/i);
}