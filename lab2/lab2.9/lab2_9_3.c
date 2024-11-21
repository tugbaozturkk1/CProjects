/*
    onceki pr icin listLess isimli fonks yaz
    fonks listenin bas. adresini alir ve basari notu 60'in altinda olan ogrencileri siler
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
ogr *head, *node, *silinecek_node, *pre_node, *last_node;

void kayit_ekleme();
void listLess();
void kayit_listele();

int main() {

    kayit_ekleme();
    listLess();
    kayit_listele();

    return 0;
}

void kayit_ekleme() {

    int kayit_sayisi;
    printf("kac kayit girilecek ? : "); scanf("%d",&kayit_sayisi);
    for(int i=0; i<kayit_sayisi; i++) {
        if(i==0) {
            head = (ogr *)malloc(sizeof(ogr));
            node = head;
        }
        else {
            node->next = (ogr *)malloc(sizeof(ogr));
            node = node->next;
        }
        printf("ad : "); scanf("%s",node->name);
        printf("no : "); scanf("%d",&node->no);
        printf("midterm : "); scanf("%d",&node->midterm);
        printf("final : "); scanf("%d",&node->final);
    }
    node->next=NULL;
    printf("kayit islemi basarili \n");
}

void listLess() {

    float ort;
    node = head;
    pre_node = NULL;
    while (node != NULL) {
        ort = ((node->midterm)*4/10) + ((node->final)*6/10);
        if (ort < 60) {
            silinecek_node = node;
            if (pre_node == NULL) {
                head = node->next;
                free(silinecek_node);
                node = head;
            }
            else {
                pre_node->next = node->next;
                free(silinecek_node);
                node = pre_node->next;
            }
        } 
        else {
            pre_node = node;
            node = node->next;
        }
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