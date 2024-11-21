#include <stdio.h>
#include <stdlib.h> 

struct node {
    int data;
    struct node *next;
};

struct node *add();
void print();
void printRecursive();
struct node *delete();
struct node *destroy();

int main() {

    struct node *head = NULL;
    head = add(head, 3);
    head = add(head, 7);
    head = add(head, 1);

    //print(head);
    printRecursive(head);
    head = delete(head, 8);
    printRecursive(head);
    head = add(head, 2);
    printRecursive(head);
    head = destroy(head);
    printRecursive(head);
    printf("eleman kalmadi");
    return 0;
}

struct node *add(struct node *head, int key) {
    struct node *temp = (struct node *)malloc(sizeof(struct node));
    temp->data = key;
    temp->next = NULL;

    if(head==NULL) {
        head = temp;
    }
    else {
        struct node *cursor = head;
        while(cursor->next != NULL) {
            cursor = cursor -> next;
        }
        cursor->next = temp;
    }
    return head;
}

void print(struct node *head) {
    struct node *temp = head;
    while(temp!=NULL) {
        printf("adres : %p ve adresteki deger : %d\n", temp, temp->data);
        temp = temp->next;
    }
}

void printRecursive(struct node *head) {
    if(head==NULL) {
        return;
    }
    else {
        printf("%d\n", head->data);
        printRecursive(head->next);
    }
}

struct node *delete(struct node *head, int key) {
    struct node *temp = head;
    // 1.dugum mu?
    if(temp->data == key) {
        head = head->next;
        free(temp);
    }
    // ortadaki dugumlerden mi? sondan mi?
    else {
        while(temp->next!=NULL && temp->next->data!=key) {
            temp = temp->next;
        }
        if(temp->next==NULL) {
            printf("silinecek eleman yok\n");
            return head;
        }
        struct node *del = temp->next;
        temp->next = temp->next->next;
        free(del);
    }
    return head;
}

struct node *destroy(struct node *head) {
    if(head==NULL) {
        return 0;
    }
    else {
        struct node *temp;
        temp = head;
        head = head->next;
        free(temp);
        return destroy(head);
    }
}