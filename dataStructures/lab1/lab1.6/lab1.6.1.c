/*
    write a function that returns the max value 
    of a given single linked list
*/

#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *next;
};

struct node *add();
void showMaxValue();

int main() {
    
    struct node *head = NULL;
    head = add(head, 33);
    head = add(head, 60);
    head = add(head, 100);
    head = add(head, 15);
    head = add(head, 80);

    showMaxValue(head); 

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

void showMaxValue(struct node *head) {
    struct node *cursor = head;
    int maxValue = cursor->data;
    while(cursor->next != NULL) {
        if(cursor->data > maxValue) {
            maxValue = cursor->data;
        }
        cursor = cursor->next;
    }
    if(cursor->data > maxValue) {
        maxValue = cursor->data;
    }
    printf("max value : %d\n", maxValue);
}