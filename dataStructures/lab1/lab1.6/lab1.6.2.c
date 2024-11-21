/*
    iki liste olustur 
    ayri bir listeye elemanlarini sirali 
    bir sekilde at
*/

#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *next;
};

struct node *add();
struct node *sirala();
void showData();

int main() {

    struct node *head1 = NULL, *cursor1;
    struct node *head2 = NULL, *cursor2;
    struct node *head3 = NULL;

    head1 = add(head1, 8);
    head1 = add(head1, 10);
    head1 = add(head1, 12);
    cursor1 = head1;
    printf("1. listenin elemanlari eklendi\n");

    head2 = add(head2, 7);
    head2 = add(head2, 15);
    head2 = add(head2, 16);
    head2 = add(head2, 20);
    cursor2 = head2;
    printf("2.listenin elemanlari eklendi\n");

    printf("1. listenin elemanlari 3. listeye aktariliyor...\n");
    while(cursor1 != NULL) {
        head3 = add(head3, cursor1->data);
        cursor1 = cursor1->next;
    }

    printf("2. listenin elemanlari 3. listeye aktariliyor...\n");
    while(cursor2 != NULL) {
        head3 = add(head3, cursor2->data);
        cursor2 = cursor2->next;
    }

    printf("birlestirilen listenin elemanlari siralaniyor...\n");
    head3 = sirala(head3);
    printf("listenin elemanlari :\n");
    showData(head3);

    return 0;
}

struct node *add(struct node *head, int key) {
    struct node *temp = (struct node*)malloc(sizeof(struct node));
    temp->data = key;
    temp->next = NULL;

    if(head==NULL) {
        head = temp;
    }
    else {
        struct node *cursor = head;
        while(cursor->next!=NULL) {
            cursor = cursor->next;
        }
        cursor->next = temp;
    }
    return head;
}

struct node *sirala(struct node *head) {
    struct node *cursor = head, *icCursor = head;
    int key;
    
    while(cursor != NULL) {
        key = cursor->data;
        while(icCursor!=NULL && icCursor->data >= key) {
            icCursor = icCursor->next;
        }
        if(icCursor!=NULL) {
            cursor->data = icCursor->data;
            icCursor->data = key;
        }
        cursor = cursor->next;
        icCursor = cursor;
    }
    return head;
}

void showData(struct node *head) {
    struct node *temp = head;
    while(temp!=NULL) {
        printf("%d\n", temp->data);
        temp = temp->next;
    }
}