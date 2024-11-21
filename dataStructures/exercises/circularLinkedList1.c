#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *next;
};

struct node *addFront();
struct node *addEnd();
void print();
struct node *delete();

int main() {

    struct node *head = NULL;
    head = addFront(head, 3);
    head = addEnd(head, 1);
    head = addEnd(head, 8);
    print(head);
    head = delete(head, 7);
    print(head);

    return 0;
}

struct node *addFront(struct node *head, int key) {
    struct node *temp = (struct node *)malloc(sizeof(struct node));
    temp->data = key;
    if(head==NULL) {
        head = temp;
        head->next = temp;
    }
    else {
        struct node *last = head;
        while(last->next!=head) {
            last = last->next;
        }
        last->next = temp;
        temp->next = head;
        head = temp;
    }
    return head;
}

struct node *addEnd(struct node *head, int key) {
    struct node *temp = (struct node *)malloc(sizeof(struct node));
    temp->data = key;
    if(head==NULL) {
        head = temp;
        head->next = temp;
    }
    else {
        struct node *last = head;
        while(last->next!=head) {
            last = last->next;
        }
        last->next = temp;
        temp->next = head;
    }
    return head;
}

void print(struct node *head) {
    struct node *temp = head;
    while(temp->next!=head) {
        printf("veri : %d\n", temp->data);
        temp = temp->next;
    }
    printf("veri : %d\n", temp->data);
}

struct node *delete(struct node *head, int key) {
    struct node *temp = head;
    if(head->data == key) {
        struct node *last = head;
        while(last->next!=head) {
            last = last->next;
        }
        last->next = head->next;
        head = head->next;
        free(temp);
    }
    else {
        while(temp->next->data!=key && temp->next!=head) {
            temp = temp->next;
        }
        if(temp->next==head) {
            printf("eleman bulunamadi\n");
            return head;
        }
        else {
            struct node *del = temp->next;
            temp->next = del->next;
            free(del);
        }
    }
    return head;
}