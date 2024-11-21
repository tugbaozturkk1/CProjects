/*
    bir sirket calisanlarinin adlarinin zaten var olan tek bir dogrusal baglantili listede saklandigini
    varsayalim
    1-liste verilerini yazdir
    2-listedeki mevcut calisan isimlerini alfabetik sirala
    3-listeyi tersine cevir
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct calisan{
    char name[15];
    char surname[15];
    struct calisan *next;
};

typedef struct calisan node;
node *head;

void kayit_olustur();
void yazdir();
void alfabetik_sirala();
void ters_cevir();

int main() {
    int kisi;
    printf("kac kisilik kayit girilecek?\n"); scanf("%d",&kisi);
    kayit_olustur(kisi);
    //yazdir();
    //alfabetik_sirala();
    ters_cevir();
    yazdir();
    free(head);
    return 0;
}

void kayit_olustur(int kisi) {
    node *p;
    
    for(int i=0; i<kisi; i++) {
        if(i==0) {
            head = (node *)malloc(sizeof(node));
            p = head;
        }
        else {
            p->next = (node *)malloc(sizeof(node));
            p = p->next;
        }
        printf("%d. kisinin adi ve soyadi = ",i+1); scanf("%s%s",p->name,p->surname);
    }
    p->next = NULL;
}

void yazdir() {
    node *p;
    p = head;
    while(p!=NULL) {
        printf("%s %s\n",p->name, p->surname);
        p = p -> next;
    }
}

void alfabetik_sirala() {
    node *p, *cursor;
    char temp_name[15], temp_surname[15];
    p=head;
    while(p!=NULL) {
        cursor = p->next;
        while(cursor!=NULL) {
            if((strcmp(p->name,cursor->name))>0) {
                strcpy(temp_name,p->name);
                strcpy(p->name,cursor->name);
                strcpy(cursor->name, temp_name);

                strcpy(temp_surname,p->surname);
                strcpy(p->surname,cursor->surname);
                strcpy(cursor->surname, temp_surname);
            }
            cursor = cursor -> next;
        }
        p = p->next;
    }
}

void ters_cevir() {
    node *onceki, *sonraki, *cursor;
    onceki = NULL;
    cursor = head;
    while(cursor!=NULL) {
        sonraki = cursor->next;
        cursor->next = onceki;
        onceki = cursor;
        cursor = sonraki;
    }
    head = onceki;
}