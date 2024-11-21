/*
    create a single linked list
    1. add a new node to the head of the list
    2. add new node to the tail of the list
    3. find the total number of nodes in the list
    4. print all the elements in the list
*/

#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *next;
};

struct node *create();
struct node *addHead();
struct node *addEnd();
int count();
void print();

int main() {

    int num;
    struct node *head;
    head = (struct node*)malloc(sizeof(struct node));
    create(head);

    printf("Write the number to be added to the beginning of the list: ");
    scanf("%d",&num);
    head = addHead(head, num);

    printf("Write the number to be added to the end of the list: ");
    scanf("%d",&num);
    head = addEnd(head, num);

    printf("all numbers :\n");
    print(head);

    printf("\ntotal %d numbers", count(head));
    return 0;
}

struct node *create(struct node *head){
    struct node *temp = head;
    int flag = 1;
    while(flag==1) {
        printf("write a num : ");
        scanf("%d",&temp->data);
        
        printf("continue or stop? (1 = continue, any num = stop) : ");
        scanf("%d",&flag);
        if(flag==1) {
            temp->next = (struct node *)malloc(sizeof(struct node));
            temp = temp->next;
        }
    } 
    temp->next = NULL;
    return head;
}

struct node *addHead(struct node *head, int key) {
    struct node *temp;
    temp = (struct node*)malloc(sizeof(struct node));
    temp->data = key;
    temp->next = head;
    head = temp;
    return head;
}

struct node *addEnd(struct node *head, int key) {
    struct node *temp;
    temp = (struct node*)malloc(sizeof(struct node));
    temp = head;
    while(temp->next!=NULL){
        temp = temp->next;
    }
    temp->next = (struct node*)malloc(sizeof(struct node));
    temp->next->data = key;
    temp->next->next = NULL;
    return head;
}

void print(struct node *head) {
    struct node *temp = head;
    while(temp!=NULL) {
        printf("%d ", temp->data);
        temp = temp->next;
    }
}

int count(struct node *head) {
    struct node *temp = head;
    int counter=0;
    while(temp!=NULL) {
        counter++;
        temp = temp->next;
    }
    return counter;
}