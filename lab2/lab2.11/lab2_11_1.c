/*
    bir bankanin 20 musterisine ait bilgiler asagidaki struct yapisi kullanilarak musteri.dat isimli
    rastgele erisimli bir dosyada saklanmakta
    musterilerin hesabindaki para miktari 0'dan az olan kac musteri old. donduren fonks. yaz
*/

#include <stdio.h>
#include <stdlib.h>

struct customer{
    int account;
    char surname[20];
    char name[20];
    double deposit;
};

int listIndebtedAccounts(FILE *p);

int main() {
    FILE *fileP;
    int islem;
    struct customer freeCustomer = {0,"","",0};

    if((fileP=fopen("musteri.dat","w"))==NULL) {
        printf("dosya olusturulamadi\n");
    }
    else {
        for(int i=0; i<20; i++) {
            fwrite(&freeCustomer, sizeof(struct customer), 1, fileP);
        }
        fclose(fileP);
    }

    if((fileP=fopen("musteri.dat","r+"))==NULL) {
        printf("dosya acilamadi\n");
    }
    else {
        printf("musteri hesap no, soyad, ad, depozito gir\n");
        for(int i=0; i<20; i++) {
            fscanf(stdin, "%d%s%s%lf", &freeCustomer.account, freeCustomer.surname, freeCustomer.name, &freeCustomer.deposit);
            fseek(fileP,(freeCustomer.account-1)*sizeof(struct customer),SEEK_SET);
            fwrite(&freeCustomer, sizeof(struct customer), 1, fileP);
        }
        fclose(fileP);
    }

    printf("yapilacak islemi gir \n");
    scanf("%d",&islem);
    switch(islem) {
        case 1:
            if((fileP=fopen("musteri.dat","r"))==NULL) {
                printf("dosya acilamadi\n");
            }
            else {
                printf("depozito < 0 olan hesap sayisi = %d\n",listIndebtedAccounts(fileP));
                fclose(fileP);
                break;
            }
    }
    return 0;
}

int listIndebtedAccounts(FILE *p) {
    struct customer freeCustomer;
    int kisi_sayisi=0;
    for(int i=0; i<20; i++) {
        fseek(p, i*sizeof(struct customer), SEEK_SET);
        fread(&freeCustomer, sizeof(struct customer), 1, p);
        if(freeCustomer.deposit<0) {
            kisi_sayisi++;
        }
    }
    return kisi_sayisi;
}