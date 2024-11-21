/*
    onceki pr icin updateAhmet isimli fonks yaz
    fonks listenin bas adresini alir 
    ismi Ahmet olan tum kayitlari AHMET olarak gunceller
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct student {
    char name[15];
    int no,midterm,final;
    struct student *next;
};

typedef struct student ogr;
ogr *head, *node;

void kayit_ekleme();
void updateAhmet();
void kayit_listele();

int main() {

    kayit_ekleme();
    updateAhmet();
    kayit_listele();
    return 0;
}

void kayit_ekleme() {

    int kayit;
    printf("kac kayit girilecek? : "); scanf("%d",&kayit);

    for(int i=0; i<kayit; i++) {
        if(i==0) {
            head = (ogr*)malloc(sizeof(ogr));
            node=head;
        }
        else {
            node->next=(ogr*)malloc(sizeof(ogr));
            node=node->next;
        }
        printf("ad : "); scanf("%s",node->name);
        printf("no : "); scanf("%d",&node->no);
        printf("midterm : "); scanf("%d",&node->midterm);
        printf("final : "); scanf("%d",&node->final);
    }
    node->next=NULL;
}

void updateAhmet() {

    node=head;
    char new_name[6]="AHMET";
    while(node!=NULL) {
        if(strcmp(node->name,"Ahmet")==0){
            strcpy(node->name,new_name);
        }
        node=node->next;
    }
}

void kayit_listele() {

    node=head;
    while(node!=NULL) {
        printf("ad : %s\n",node->name);
        printf("no : %d\n",node->no);
        printf("midterm : %d\n",node->midterm);   
        printf("final : %d\n",node->final);
        node=node->next;
    }
}