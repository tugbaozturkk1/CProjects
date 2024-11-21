/*
    1. create a double linked list to store car information
    2. void addSorted(struct car **head, char model[], int year)
        void delete(struct car **head, char model[], int year)
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void addSorted();
struct car* delete();
void print();

struct car {
    char model[50];
    int year;
    struct car *prev;
    struct car *next;
};

int main() {

    struct car *head = NULL;
    addSorted(&head, "toyota", 2015);
    addSorted(&head, "honda", 2018);
    addSorted(&head, "BMW", 2012);
    addSorted(&head, "audi", 2016);
    delete(head, "honda", 2018);
    print(&head);
    
    return 0;
}

void addSorted(struct car **head, char model[], int year) {
    struct car *temp;
    temp = (struct car*)malloc(sizeof(struct car));
    temp->year = year;
    strcpy(temp->model, model);
    temp->next = NULL;
    temp->prev = NULL;
    
    if(*head == NULL || year<=(*head)->year) {
        temp->next = *head;
        if(*head != NULL) {
            (*head)->prev = temp;
        }
        *head = temp;
        return;
    }

    struct car *cursor = *head;
    while (cursor->next != NULL && cursor->next->year < year) {
        cursor = cursor->next;
    }

    temp->next = cursor->next;
    temp->prev = cursor;

    if (cursor->next != NULL) {
        cursor->next->prev = temp;
    }

    cursor->next = temp;
}

struct car* delete(struct car *head, char model[], int year) {
    struct car *temp = head;
    if(head!=NULL) {
        if((head->year==year) && (strcmp(head->model, model)==0)) {
            head = head->next;
            head->prev = NULL;
            free(temp);
        }
        else {
            while((temp!=NULL) && (strcmp(temp->model, model)!=0) && (temp->year!=year)) {
                temp = temp->next;
            }
            if(temp==NULL) {
                return head;
            }
            temp->prev->next = temp->next;
            if(temp->next!=NULL) {
                temp->next->prev = temp->next;
            }
            free(temp);
        }
    }
    return head;
}


void print(struct car **head) {
    struct car *temp = *head;
    while(temp!=NULL) {
        printf("model : %s and year : %d\n", temp->model, temp->year);
        temp = temp->next;
    }
}