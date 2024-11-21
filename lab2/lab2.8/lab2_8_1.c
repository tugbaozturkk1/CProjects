/*
    student isimli struct yapisi olustur
    number, name, surname, midtermGrade, finalGrade alanlarindan olussun
*/

#include <stdio.h>

int main() {

    int ogrenci_sayisi;

    struct student {
        long long int number;
        char name[15];
        char surname[15];
        int midGrade;
        int finalGrade;
    };

    printf("ogrenci sayisi gir = ");
    scanf("%d",&ogrenci_sayisi);

    struct student students[ogrenci_sayisi];

    for(int i=0; i<ogrenci_sayisi; i++) {
        printf("ogrenci no = ");
        scanf("%lld",&students[i].number);
        printf("ogrenci adi ve soyadi = ");
        scanf("%s",students[i].name);
        scanf("%s",students[i].surname);
        printf("ogrencinin sirasiyla mid ve final notlari = ");
        scanf("%d",&students[i].midGrade);
        scanf("%d",&students[i].finalGrade);
    }

    printf("ogrenciler ve istenen bilgiler\n-----------\n");

    for(int i=0; i<ogrenci_sayisi; i++) {
        printf("adi-soyadi : %s %s\n",students[i].name,students[i].surname);
        printf("ogrenci no : %lld\n",students[i].number);
        printf("mid : %d\nfinal : %d\n",students[i].midGrade,students[i].finalGrade);
        printf("--------------\n");
    }

    return 0;
}