/*
    1.sorudaki yapi ile 5 ogrenci icin bir pointer dizisi olustur
    bu pointer dizisi uzerinden bilgileri dongu ile kullanicidan al
*/
#include <stdio.h>
#include <stdlib.h>
  
int main() {
    int i;
    struct student {
        long long int number;
        char name[15];
        char surname[15];
        int midGrade;
        int finalGrade;
    };

    struct student *student_p=(struct student*)malloc(5*(sizeof(struct student)));

    if(student_p==NULL) {
        printf("yeterli alan tahsis edilemedi");
        return 0;
    }
    
    for(i=0; i<5; i++) {
        printf("ogrenci no = ");
        scanf("%lld",&student_p[i].number);
        printf("ogrenci adi ve soyadi = ");
        scanf("%s",student_p[i].name);
        scanf("%s",student_p[i].surname);
        printf("ogrencinin sirasiyla mid ve final notlari = ");
        scanf("%d",&student_p[i].midGrade);
        scanf("%d",&student_p[i].finalGrade);
    }

    printf("ogrenciler ve istenen bilgiler\n-----------\n");

    for(int i=0; i<5; i++) {
        printf("adi-soyadi : %s %s\n",student_p[i].name,student_p[i].surname);
        printf("ogrenci no : %lld\n",student_p[i].number);
        printf("mid : %d\nfinal : %d\n",student_p[i].midGrade,student_p[i].finalGrade);
        printf("--------------\n");
    }

    free(student_p);

    return 0;
}