#include <stdio.h>
struct musteri {
    int no;
    int miktar;
    char name[10];
};
int main() {

    FILE *f;
    struct musteri kisi={0,0,""};
    if((f=fopen("hesap.dat","w"))==NULL) {
        printf("dosya acilamadi");
    }
    else {
        for(int i=0; i<3; i++) {
            fwrite(&kisi, sizeof(struct musteri), 1, f);
        }
        fclose(f);
    }

    if((f=fopen("hesap.dat","r+"))==NULL) {
        printf("dosya acilamadi\n");
    }
    else {
        for(int i=0; i<3; i++) {
            fscanf(stdin, "%d%d%s", &kisi.no, &kisi.miktar, kisi.name);
            fseek(f,(kisi.no-1)*sizeof(struct musteri),SEEK_SET);
            fwrite(&kisi, sizeof(struct musteri), 1, f);
        }
    }
    /*
    int id;
    int islem;
    printf("guncellenecek id ");
    scanf("%d",&id);
    fseek(f,(id-1)*sizeof(struct musteri),SEEK_SET);
    fread(&kisi, sizeof(struct musteri), 1, f);
    if(kisi.no==0) {
        printf("hesap bilgisi yok");
    }
    else {
        printf("yatacak para "); scanf("%d",&islem);
        kisi.miktar+=islem;
        printf("%d\t%d\t%s\n",kisi.no, kisi.miktar, kisi.name);
    }
    */
   struct musteri bosHesap = {0,0,""};
   int id;
   printf("silinecek hesapno"); scanf("%d",&id);
   fseek(f,sizeof(struct musteri)*(id-1),SEEK_SET);
  // fread(&kisi, sizeof(struct musteri),1,f);
   fwrite(&bosHesap, sizeof(struct musteri),1,f);

    for(int i=0; i<3; i++) {
        fseek(f,sizeof(struct musteri)*i,SEEK_SET);
        fread(&kisi, sizeof(struct musteri), 1, f);
        printf("%s ",kisi.name);
    }
    return 0;
}