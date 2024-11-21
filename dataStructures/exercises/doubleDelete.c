#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct node {
    char name[10];
    struct node *prev;
    struct node *next;
};

struct node *addFront();
struct node *add();
void print();
struct node *delete();

int main() {

    struct node *head = NULL;
    head = addFront(head, "tugba");
    head = add(head, "isra");
    head = add(head, "can");
    head = add(head, "su");
    print(head);

    head = delete(head, "su");
    print(head);

    return 0;
}

struct node *addFront(struct node *head, char *name) {
    struct node *temp = (struct node*)malloc(sizeof(struct node));
    strcpy(temp->name, name);
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

struct node *add(struct node *head, char *name) {
    struct node *temp = (struct node*)malloc(sizeof(struct node));
    struct node *cursor = head;
    strcpy(temp->name, name);
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
        printf("name : %s\n", temp->name);
        temp = temp->next;
    }
}

struct node *delete(struct node *head, char *name) {
    struct node *temp = head;
    if(strcmp(head->name, name)==0) {
        head = head->next;
        head->prev=NULL;
        free(temp);
    }
    else {
        while(temp!=NULL && (strcmp(temp->name, name)!=0)) {
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