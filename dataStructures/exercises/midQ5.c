/*
    double linked list ilk elemani, single linked list son elemanda
    olacak
    fonks. parametresi => DLL
    return => SLL
*/

#include <stdio.h>
#include <stdlib.h>

struct singleNode {
    int data;
    struct singleNode *next;
};

struct doubleNode {
    int data;
    struct doubleNode *next;
    struct doubleNode *pre;
};

struct doubleNode *addDouble();
struct singleNode *convertDoubleToSingle();
void show();

int main() {

    struct doubleNode *head1 = NULL;
    struct singleNode *head2 = NULL;

    head1 = addDouble(head1, 20);
    head1 = addDouble(head1, 8);
    head1 = addDouble(head1, 12);
    head1 = addDouble(head1, 5);

    head2 = convertDoubleToSingle(head1);
    show(head2);

    return 0;
}

struct doubleNode *addDouble(struct doubleNode *head, int key) {
    struct doubleNode *temp = (struct doubleNode*)malloc(sizeof(struct doubleNode));
    temp->data = key;
    temp->next = NULL;
    temp->pre = NULL;

    if(head==NULL) {
        temp->next = head;
        head = temp;
    }
    else {
        struct doubleNode *cursor = head;
        while(cursor->next!=NULL) {
            cursor = cursor->next;
        }
        cursor->next = temp;
        temp->pre = cursor;
    }
    return head;
}

struct singleNode *convertDoubleToSingle(struct doubleNode *head1) {
    struct doubleNode *cursor = head1;
    struct singleNode *head2 = NULL;

    while(cursor->next!=NULL) {
        cursor = cursor->next;
    }

    while(cursor!=NULL) {
        struct singleNode *temp = (struct singleNode*)malloc(sizeof(struct singleNode));
        temp->data = cursor->data;
        temp->next = NULL;

        if(head2==NULL) {
            head2 = temp;
        }
        else {
            struct singleNode *cursor2 = head2;
            while(cursor2->next!=NULL) {
                cursor2 = cursor2->next;
            }
            cursor2->next = temp;
        }
        cursor = cursor->pre;
    }
    return head2;
}

void show(struct singleNode *head) {
    struct singleNode *temp = head;
    while(temp!=NULL) {
        printf("%d ", temp->data);
        temp = temp->next;
    }
}