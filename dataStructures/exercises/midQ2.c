/*
    int degerler kucukten buyuge sirali
    single linked list 
    parametre olarak baslangic adresi ve eklenecek sayiyi alan fonks. yaz
    siralamayi bozmadan ekle
*/

#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *next;
};

struct node *add();
void show();

int main() {

    struct node *head = NULL;
    head = add(head, 13);
    head = add(head, 7);
    head = add(head, 5);
    head = add(head, 20);
    head = add(head, 8);
    head = add(head, 6);

    show(head);

    return 0;
}

struct node *add(struct node *head, int key) {
    struct node *temp = (struct node*)malloc(sizeof(struct node));
    temp->data = key;
    temp->next = NULL;

    if(head==NULL || head->data>key) {
        temp->next = head;
        head = temp;
    }
    else {
        struct node *cursor = head;
        while(cursor->next!=NULL && cursor->next->data<key) {
            cursor = cursor->next;
        }
        if(cursor->next == NULL) {
            cursor->next = temp;
        }
        else {
            temp->next = cursor->next;
            cursor->next = temp;
        }
    }
    return head;
}

void show(struct node *head) {
    struct node *temp = head;
    while(temp!=NULL) {
        printf("%d ", temp->data);
        temp = temp->next;
    }
}