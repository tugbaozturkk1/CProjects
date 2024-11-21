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
struct node *delete();

int main() {
    struct node *head = NULL;
    head = addFront(head, 30);
    head = addEnd(head, 9);
    head = addEnd(head, 120);
    print(head);
    head = delete(head, 120);
    print(head);

    return 0;
}

struct node *addFront(struct node *head, int key) {
    struct node *temp = (struct node*)malloc(sizeof(struct node));
    temp->data = key;
    temp->next = NULL;
    temp->prev = NULL;

    if(head==NULL) {
        head = temp;
    }
    else {
        temp->next = head;
        head->prev = temp;
        temp->prev = NULL;
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
        printf("veri : %d\n", temp->data);
        temp = temp->next;
    }
}

struct node *delete(struct node *head, int key) {
    struct node *temp = head;
    if(head->data==key) {
        head = head->next;
        head->prev=NULL;
        free(temp);
    }
    else {
        while(temp!=NULL && temp->data!=key) {
            temp = temp->next;
        }
        if(temp==NULL) {
            return head;
        }
        else {
            temp->prev->next = temp->next;
            if(temp->next!=NULL) {
                temp->next->prev = temp->prev;
            }
            free(temp);
        }
    }
    return head;
}