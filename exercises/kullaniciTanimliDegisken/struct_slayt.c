#include <stdio.h>
/*
int main() {

    struct {
        int year;
        int month;
        int day;
    } birth_day;

    printf("enter your b-day(mm-dd-yyyy format)");
    scanf("%d%d%d", &birth_day .month,
                    &birth_day .day,
                    &birth_day .year);

    printf("your b-day : ");
    printf("%d\n%d\n%d\n", birth_day.month,birth_day.day,birth_day.year);

    return 0;
}
*/
/*
int main() {

    struct {int year; int month; int day;} you, yourSis,yourBro;
    printf("enter b-day : ");
    scanf("%d%d%d",&you.month,&you.day,&you.year);

    printf("enter your sis b-day : ");
    scanf("%d%d%d",&yourSis.month,&yourSis.day,&yourSis.year);

    return 0;
}
*/
/*
int main() {

    struct {
        char name[20];
        int length;
        struct {
            int year;
            int month;
            int day;
        } bornInfo;
    } person;

    printf("your name : ");
    scanf("%s",person.name);

    printf("your len : ");
    scanf("%d",&person.length);

    printf("your b-day : ");
    scanf("%d%d%d",&person.bornInfo.month,
                    &person.bornInfo.day,
                    &person.bornInfo.year);

    printf("girilen bilgiler : \n");
    printf("name : %s\n",person.name);
    printf("length = %d\n",person.length);
    printf("b-day : %d.%d.%d\n",person.bornInfo.month,person.bornInfo.day,person.bornInfo.year);


    return 0;
}
*/

// yapilari etiketleme
/*
#include <string.h>

int main() {
    // personData is the label of our struct
    struct personData {
        char name[20];
        int len;
    };
    // we create 2 variables using struct
    struct personData person1;
    struct personData person2;

    // we store the first person's data
    strcpy(person1.name,"tugba");
    person1.len = 162;

    strcpy(person2.name,"deniz");
    person2.len = 170;

    return 0;
}
*/
// ilk deger atanabilir
int main() {

    struct {
        char name[10];
        int len;
    } person = {"tugba",162};
    printf("name : %s and length : %d",person.name,person.len);
    return 0;
}











