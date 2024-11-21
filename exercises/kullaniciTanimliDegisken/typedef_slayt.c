#include <stdio.h>
/*
int main() {

    // define new data type
    // also define a new variable with the new data type
    enum boolean {
        false=0,
        true=1
    };

    // bu tanimlamayla boolean tipinde degiskenler olusturabilirz
    typedef enum boolean bool;
    bool isTrue;
    isTrue = true;
    if(isTrue==true) 
        printf("true\n");

    return 0;
}
*/

enum month_list {jan=1,feb,mar,ap,may,
            june,july,aug,sep,oct,nov,dec};
typedef enum month_list months;
void writeMonth(months);

int main() {
    // months data tipinde degisken olustur ve nov ata
    months thisMonth = nov; // nov 11.(birer arttigini unutma)
    printf("month %d is : ",thisMonth);
    writeMonth(thisMonth);
    return 0;
}

void writeMonth ( months nameOfMonth) {
    switch (nameOfMonth) {
        case jan : printf("jan \n");break;
        case feb : printf("feb \n");break;
        case mar : printf("mar \n");break;
        case ap : printf("ap \n");break;
        case may : printf("may \n");break;
        case june : printf("june \n");break;
        case july : printf("july \n");break;
        case aug : printf("aug \n");break;
        case sep : printf("sep \n");break;
        case oct : printf("oct \n");break;
        case nov : printf("nov \n");break;
        case dec : printf("dec \n");break;
    }
}