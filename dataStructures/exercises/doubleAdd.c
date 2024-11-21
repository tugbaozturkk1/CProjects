#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *prev;
    struct node *next;
};

struct node *addFront();
struct node *addEnd();
void print();

int main() {

    struct node *head = NULL;
    head = addFront(head, 10);
    head = addFront(head, 5);
    head = addEnd(head, 12);
    head = addFront(head, 6);
    head = addEnd(head, 20);
    print(head);

    return 0;
}

struct node *addFront(struct node *head, int key) {
    struct node *temp = (struct node*)malloc(sizeof(struct node));
    temp->data = key;
    temp->next = temp->prev = NULL;

    if(head==NULL) {
        head = temp;
    }
    else {
        temp->next = head;
        head->prev = temp;
        head = temp;
    }
    return head;
}

struct node *addEnd(struct node *head, int key) {
    struct node *temp = (struct node*)malloc(sizeof(struct node));
    struct node *cursor = head;
    temp->data = key;
    temp->next = NULL;
    temp->prev = NULL;
    
    while(cursor->next!=NULL) {
        cursor = cursor->next;
    }
    cursor->next = temp;
    temp->prev = cursor;
    return head;
}


void print(struct node *head) {
    struct node *temp = head;
    while(temp!=NULL) {
        printf("data : %d\n", temp->data);
        temp = temp->next;
    }
}