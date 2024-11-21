/*
    2.sorudaki 5 ogrencinin mid ve final notlarini kullanarak ort yil sonu notunu bul
*/

#include <stdio.h>
#include <stdlib.h>
int main() {
    int i, toplam=0;
    float ort;
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

    printf("sirayla mid ve final notlarini gir : ");    
    for(i=0; i<5; i++) {
        scanf("%d",&(student_p+i)->midGrade);
        scanf("%d",&(student_p+i)->finalGrade);
        toplam = toplam + (student_p+i)->finalGrade + (student_p+i)->midGrade;
    }

    ort=(float)toplam/10;

    printf("ortalama = %f",ort);
    free(student_p);
    return 0;
}