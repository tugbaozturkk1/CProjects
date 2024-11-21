/*
    bazi nodelerin cocuk nodeleri olacak
*/

#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *next;
    struct node *child;
};

struct node *add();
struct node *childAdd();
void showData();

int main() {

    struct node *head = NULL;

    head = add(head, 8);
    head = childAdd(head, 8, 4);
    head = childAdd(head, 8, 5);
    head = add(head, 6);
    head = add(head, 12);
    head = childAdd(head, 12, 7);
    head = childAdd(head, 12, 3);
    head = childAdd(head, 12, 9);
    head = add(head, 5);
    
    showData(head);

    return 0;
}

struct node *add(struct node *head, int key) {
    struct node *temp = (struct node*)malloc(sizeof(struct node));
    temp->data = key;
    temp->next = NULL;
    temp->child = NULL;

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

struct node *childAdd(struct node *head, int mom, int child) {
    struct node *cursor = head;
    while(cursor != NULL && cursor->data != mom) {
        cursor = cursor->next;
    }
    if(cursor==NULL) {
        printf("mom bulunamadi..\n");
        return head;
    }

    struct node *temp = (struct node *)malloc(sizeof(struct node));
    temp->data = child;
    temp->next = NULL;
    temp->child = NULL;

    if (cursor->child == NULL) {
        cursor->child = temp;
    } 
    else {
        struct node *childCursor = cursor->child;
        while (childCursor->next != NULL) {
            childCursor = childCursor->next;
        }
        childCursor->next = temp;
    }

    return head;
}

void showData(struct node *head) {
    struct node *tempMom = head;

    while(tempMom!=NULL) {
        printf("%d\n", tempMom->data);
        if(tempMom->child!=NULL) {
            struct node *tempChild = tempMom->child;
            while(tempChild!=NULL) {
                printf("%d\n", tempChild->data);
                tempChild = tempChild->next;
            }
        }
        tempMom = tempMom->next;
    }
}