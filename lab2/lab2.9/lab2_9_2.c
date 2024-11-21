/*
    onceki program icin exchange isimli fonks. yaz
    exchange() => listenin bas. adresini alir ve ilk kayitla son kaydin yerini degistirir
    fonks. ana menuye ekle
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
void exchange();
void kayit_listele();

int main() {

    printf("yapilacak islem :\n1-kayit ekleme\n2-kayit yeri degisim(ilk ve son kayit)\n");
    kayit_ekleme();
    exchange();
    kayit_listele();

    return 0;
}

void kayit_ekleme() {
    int num,i;
    printf("kac kayit girilecek?\n");
    scanf("%d",&num);
    for(i=0; i<num; i++) {
        if(i==0) {
            node = (ogr *)malloc(sizeof(ogr));
            head = node;
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
}

void exchange() {

    ogr *last_node, *previous_node;
    previous_node = NULL;
    last_node=head;
    while(last_node->next!=NULL) {
        previous_node = last_node;
        last_node = last_node -> next;
    }
    previous_node->next=head;
    last_node->next=head->next;
    head->next=NULL;
    head=last_node;
}

void kayit_listele() {

    node = head;
    while(node!=NULL) {
        printf("ad : %s\nno : %d\nmid : %d\nfinal : %d\n",node->name,node->no,node->midterm,node->final);
        node = node->next;
    }
}