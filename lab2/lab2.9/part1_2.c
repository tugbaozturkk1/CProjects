
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
void kayit_listele();
void kayit_guncelle();
void kayit_sil();
void sinif_ort_hesapla();
void en_basarili_bul();
void ogr_ort_hesapla();

int main() {
    int islem;
    printf("yapilabilecek islemeler : 1-yeni kayit ekle\n2-kayit listele\n3-kayit guncelle\n4-kayit sil\n5-sinif ort hesapla\n6-ort'a gore en basarili ogrenciyi bul\n");
    scanf("%d",&islem);
    switch(islem) {
        case 1: 
            yeni_kayit_ekleme();
            break;
        case 2:
            yeni_kayit_ekleme();
            kayit_listele();
            break;
        case 3:
            yeni_kayit_ekleme();
            kayit_guncelle();
            kayit_listele();
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
void kayit_listele() {
    int secim, aranacak_no;
    float ortalama;
    char aranacak_isim[15];
    ogr *yeni_dugum;
    yeni_dugum=head;
    printf("1-no'ya gore kayit listele\n2-isme gore kayit listele\n3-basari notu>60 olanlari listele\n");
    scanf("%d",&secim);
    switch(secim) {
        case 1:
            printf("aranacak no : ");
            scanf("%d",&aranacak_no);
            if(aranacak_no==yeni_dugum->no) {
                printf("aranan no bulundu\nno : %d\nad : %s\nmidterm : %d\nfinal : %d\n",yeni_dugum->no,yeni_dugum->name,yeni_dugum->midterm,yeni_dugum->final);

            }
            else {
                yeni_dugum=head;
                while(yeni_dugum->next!=NULL) {
                    if(yeni_dugum->no==aranacak_no) {
                        printf("aranan no bulundu\nno : %d\nad : %s\nmidterm : %d\nfinal : %d\n",yeni_dugum->no,yeni_dugum->name,yeni_dugum->midterm,yeni_dugum->final);
                        return;
                    }
                    yeni_dugum = yeni_dugum -> next;
                }
                printf("girilen kayit bulunamadi . ");
            }
            break;
        case 2:
            printf("aranacak isim : ");
            scanf("%s",aranacak_isim);
            yeni_dugum=head;
            while(yeni_dugum!=NULL) {
                if(strcmp(aranacak_isim,yeni_dugum->name)==0) {
                    printf("aranan isim bulundu : \n");
                    printf("no : %d\nad : %s\nmidterm : %d\nfinal : %d\n",yeni_dugum->no,yeni_dugum->name,yeni_dugum->midterm,yeni_dugum->final);
                    return;
                }
                yeni_dugum = yeni_dugum->next;
            }
            printf("aranan isim bulunamadi.\n");
            break;
        case 3:
            ogr_ort_hesapla();
            break;
    }
}

void ogr_ort_hesapla() {
    float i=1.0;
    float ort=0.0;
    ogr *yeni_dugum;
    yeni_dugum=head;
    while(yeni_dugum!=NULL) {
        ort = ((yeni_dugum->midterm)*4/10)+((yeni_dugum->final)*6/10);
        if(ort>=60) {
            printf("ogrenci no : %d\nort : %.2f\n",yeni_dugum->no,ort);
        }
        yeni_dugum = yeni_dugum -> next;
    }
}

void kayit_guncelle() {
    int flag=0;
    int guncelle_no,islem;
    ogr *dugum,*cursor;
    dugum = head;
    cursor=head;
    printf("bilgileri guncellenecek ogrencinin no gir : ");
    scanf("%d",&guncelle_no);
    if(guncelle_no==dugum->no) {
        printf("kayit bulundu. hangi bilgi guncellenecek? 1-ad\n2-vize\n3-final\n");
        scanf("%d",&islem);
        switch(islem) {
            case 1:
                printf("isim gir : "); scanf("%s",dugum->name); break;
            case 2: 
                printf("vize : "); scanf("%d",&dugum->midterm); break;
            case 3: 
                printf("final : "); scanf("%d",&dugum->final); break;
        }
    }
    else {

        cursor=cursor->next;
        while(cursor!=NULL) {
            if(cursor->no==guncelle_no) {
                printf("kayit bulundu. hangi bilgi guncellenecek?\n1-ad\n2-vize\n3-final\n");
                scanf("%d",&islem);
                switch(islem) {
                    case 1:
                        printf("isim gir : "); 
                        scanf("%s",cursor->name); 
                        break;
                    case 2: 
                        printf("vize : "); 
                        scanf("%d",&cursor->midterm); 
                        break;
                    case 3: 
                        printf("final : "); 
                        scanf("%d",&cursor->final); 
                        break;
                }
                flag=1;
            }
            cursor = cursor->next;
        }
        if(flag==0) {
            printf("kayit bulunamadi\n");   
        }
    }
}