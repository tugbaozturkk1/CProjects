/*
    bir bankanin 20 musterisine ait bilgiler asagidaki struct yapisi kullanilarak musteri.dat isimli
    rastgele erisimli bir dosyada saklanmakta
    depozito>=300 olanlari sirali erisimli list.txt dosyasina at
*/

#include <stdio.h>
#include <stdlib.h>

struct customer{
    int account;
    char surname[20];
    char name[20];
    double deposit;
};

void transferRecords();

int main() {
    FILE *fileP, *ucYuzUstu;
    int islem;
    struct customer freeCustomer = {0,"","",0};

    if((fileP=fopen("musteri.dat","w"))==NULL) {
        printf("dosya olusturulamadi\n");
    }
    else {
        for(int i=0; i<5; i++) {
            fwrite(&freeCustomer, sizeof(struct customer), 1, fileP);
        }
        fclose(fileP);
    }

    if((fileP=fopen("musteri.dat","r+"))==NULL) {
        printf("dosya acilamadi\n");
    }
    else {
        printf("musteri hesap no, soyad, ad, depozito gir\n");
        for(int i=0; i<5; i++) {
            fscanf(stdin, "%d%s%s%lf", &freeCustomer.account, freeCustomer.surname, freeCustomer.name, &freeCustomer.deposit);
            fseek(fileP,(freeCustomer.account-1)*sizeof(struct customer),SEEK_SET);
            fwrite(&freeCustomer, sizeof(struct customer), 1, fileP);
        }
        rewind(fileP);
    }

    printf("yapilacak islemi gir \n");
    scanf("%d",&islem);
    switch(islem) {
        case 1:
            if((ucYuzUstu=fopen("list.txt","w"))==NULL) {
                printf("dosya olusturulamadi\n");
            }
            else {
                transferRecords(ucYuzUstu,fileP);
                fclose(ucYuzUstu);
            }
            printf("depozito>300 olanlar list.txt dosyasina atildi\n");
            fclose(fileP);
            break;
    }
    return 0;
}

void transferRecords(FILE *p, FILE *stPtr) {
    struct customer customers;

    for(int i=0; i<5; i++) {
        fread(&customers, sizeof(struct customer), 1, stPtr);
        if(customers.deposit>=300) {
            fprintf(p, "%s\t%s\t%d\t%lf\n", customers.name, customers.surname, customers.account, customers.deposit);
        }
    }
}