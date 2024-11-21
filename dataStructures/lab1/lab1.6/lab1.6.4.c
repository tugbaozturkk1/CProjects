/*
    liste sonundan n. dugumu sil
*/

#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *next;
};

struct node *add();
void showData();
struct node *delete();

int main() {
    int node;
    struct node *head = NULL;
    head = add(head, 3);
    head = add(head, 6);
    head = add(head, 2);
    showData(head);

    printf("liste sonundan hangi dugum silinsin? : ");
    scanf("%d",&node);
    head = delete(head, node);
    printf("yeni liste :\n");
    showData(head);

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

void showData(struct node *head) {
    struct node *temp = head;
    while(temp!=NULL) {
        printf("%d\n", temp->data);
        temp = temp->next;
    }
}

struct node *delete(struct node *head, int node) {
    struct node *temp = head;
    int counter = 0;
    while(temp!=NULL) {
        counter++;
        temp = temp->next;
    }

    int deleteNode = counter-node;
    temp = head;
    counter = 1;
    if(deleteNode==0) {
        struct node *del = temp;
        head = head->next;
        free(del);
    }
    else {
        while(temp!=NULL && deleteNode!=counter) {
            counter++;
            temp = temp->next;
        }
        struct node *del = temp->next;
        temp->next = temp->next->next;
        free(del);
    }
    return head;
}