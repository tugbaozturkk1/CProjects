#include <stdio.h>
#include <stdlib.h> 

struct node {
    int data;
    struct node *next;
};

struct node *add();
struct node *delete();
void show();

int main() {

    struct node *head = NULL;
    head = add(head, 3);
    head = add(head, 7);
    head = add(head, 1);
    show(head);

    head = delete(head);
    show(head);
    head = delete(head);
    show(head);
    head = delete(head);
    show(head);

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

struct node *delete(struct node *head) {
    struct node *temp = head;
    if(head->next!=NULL) {
        head = head->next;
        free(temp);
        return head;
    }
    else {
        printf("son eleman siliniyor\n");
        free(temp);
        return 0;
    }
}

void show(struct node *head) {
    struct node *temp = head;
    if(head==NULL) {
        printf("eleman kalmadi\n");
    }
    else {
        while(temp!=NULL) {
            printf("%d ", temp->data);
            temp = temp->next;
        }
        printf("\n");
    }
}