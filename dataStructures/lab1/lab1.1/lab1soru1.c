/*
    bir ogrenci struct'u tanimlayarak ogrencinin id, ismi, notu tutulacak
    vize, final notlari fonks araciligiyla alinacak ve ogrencinin genel notu hesaplanacak,
    ekrana yazdirilacak
    struct'ta => id, isim, not olacak
*/

#include <stdio.h>
#include <stdlib.h> 

void calculateNotes();

int main() {

    struct student{
        int id;
        char name[10];
        int midterm;
        int final;
    };

    int ogrSayi;
    printf("ogrenci sayisi : ");
    scanf("%d",&ogrSayi);

    struct student *studentP = (struct student*)malloc(ogrSayi*sizeof(struct student));

    for(int i=0; i<ogrSayi;i++) {
        printf("ogrenci adi giriniz : ");
        scanf("%s",&studentP[i].name);
    }

    printf("not girisi : \n");

    for(int j=0; j<ogrSayi; j++) {
        calculateNotes(studentP[j].midterm, studentP[j].final);
    }

    return 0;
}

void calculateNotes(int midterm, int final) {
    printf("vize notu : "); 
    scanf("%d",&midterm);
    printf("\nfinal notu : ");
    scanf("%d",&final);

    int result = (midterm*4/10) + (final*6/10);
    printf("ortalama : %d\n",result);
}