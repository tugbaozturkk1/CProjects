/*
    bir bankanin 20 musterisine ait bilgiler asagidaki struct yapisi kullanilarak musteri.dat isimli
    rastgele erisimli bir dosyada saklanmakta
    depozitoyu %50 artır ve 300'den buyuk veya esit olanlarin kaydini guncelle
*/

#include <stdio.h>
#include <stdlib.h>

struct customer{
    int account;
    char surname[20];
    char name[20];
    double deposit;
};

void updateRecords();

int main() {
    FILE *fileP;
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
            updateRecords(fileP);
            fclose(fileP);
            printf("kayitlar guncellendi\n");
            fclose(fileP);
            break;
        }
    return 0;
}

void updateRecords(FILE *p) {
    struct customer customers;

   for(int i=0; i<5; i++) {
        fread(&customers, sizeof(struct customer), 1, p);
        customers.deposit+=customers.deposit/2;
    }
   // fseek(p,0,SEEK_SET);
    for(int i=0; i<5; i++) {
        fseek(p, i*sizeof(struct customer), SEEK_SET);
        fread(&customers, sizeof(struct customer), 1, p);
        if(customers.deposit>=300) {
            printf("%d. hesabin kaydini guncelle\nisim, soyisim, no, depozito\n",customers.account);
            fscanf(stdin, "%s%s%d%lf", customers.name, customers.surname, &customers.account, &customers.deposit);
            fseek(p,(customers.account-1)*sizeof(struct customer),SEEK_SET);
            fwrite(&customers, sizeof(struct customer), 1, p);
        }
    }
}