/*
    bir bankanin 20 musterisine ait bilgiler asagidaki struct yapisi kullanilarak musteri.dat isimli
    rastgele erisimli bir dosyada saklanmakta
    hesabinda max para olanin bilgilerini dondur
*/

#include <stdio.h>
#include <stdlib.h>

struct customer{
    int account;
    char surname[20];
    char name[20];
    double deposit;
};

struct customer findMaxDeposit(FILE *);

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
                struct customer maxCustomer = findMaxDeposit(fileP);
                printf("en cok parasi olan\n");
                printf("ad soyadi = %s %s\n",maxCustomer.name,maxCustomer.surname);
                printf("kalan para = %lf ve hesap no = %d\n",maxCustomer.deposit, maxCustomer.account);
                fclose(fileP);
            }
            break;
    }
    return 0;
}

struct customer findMaxDeposit(FILE *p) {

    struct customer maxCustomer, customer;
    double maxMoney=0.0;
    for(int i=0; i<5; i++) {
        fseek(p, i*sizeof(struct customer), SEEK_SET);
        fread(&maxCustomer, sizeof(struct customer), 1, p);
        if(maxCustomer.deposit>maxMoney) {
            maxMoney=maxCustomer.deposit;
            customer = maxCustomer;
        }
    }
    return customer;
}
