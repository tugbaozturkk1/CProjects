/*
    employeeNo degerine gore kucukten buyuge sirali
    double linked list 
    verilen isim ve no sirayi bozmadan listeye eklensin
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct node {
    int employeeNo;
    char name[20];
    struct node *next;
    struct node *pre;
};

struct node *add();
void show();

int main() {

    struct node *head = NULL;
    head = add(head, 5, "tugba");
    head = add(head, 7, "isra");
    head = add(head, 4, "naz");
    head = add(head, 9, "xyz");
    head = add(head, 8, "zulu");
    head = add(head, 6, "can");
    head = add(head, 1, "abc");
    show(head);

    return 0;
}

struct node *add(struct node *head, int employeeNo, char name[]) {
    struct node *temp = (struct node*)malloc(sizeof(struct node));
    temp->employeeNo = employeeNo;
    strcpy(temp->name, name);
    temp->next = NULL;
    temp->pre = NULL;

    if(head==NULL || head->employeeNo>employeeNo) {
        temp->next = head;
        if(head!=NULL) {
            head->pre = temp;
        }
        head = temp;
        return head;
    }
    else {
        struct node *cursor = head;
        while(cursor->next!=NULL && cursor->next->employeeNo<employeeNo) {
            cursor = cursor->next;
        }
        if(cursor->next==NULL) {
            cursor->next = temp;
            temp->pre = cursor;
        }
        else {
            temp->next = cursor->next;
            temp->pre = cursor;
            cursor->next = temp;
        }
        return head;
    }
}

void show(struct node *head) {
    struct node *temp = head;
    while(temp!=NULL) {
        printf("%s : %d\n", temp->name, temp->employeeNo);
        temp = temp->next;
    }
}
