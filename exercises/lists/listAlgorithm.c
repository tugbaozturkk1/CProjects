/*
    You are given two non-empty linked lists representing two non-negative integers. 
    The digits are stored in reverse order, and each of their nodes contains a single digit. 
    Add the two numbers and return the sum as a linked list.
    You may assume the two numbers do not contain any leading zero, except the number 0 itself.
*/

#include <stdio.h>
#include <stdlib.h>
struct listNode {
    int number;
    struct listNode *next;
};
typedef struct listNode l;
l *head, *newNode, *head2, *newNode2, *cursor, *cursor2;
int main() {
    for(int i=0; i<3; i++) {
        if(i==0) {
            head = (l*)malloc(sizeof(l));
            newNode = head;
        }
        else {
            newNode->next= (l*)malloc(sizeof(l));
            newNode = newNode->next;
        }
        printf("write num : ");
        scanf("%d",&newNode->number);
        printf("\n");
    }
    newNode->next=NULL;

    for(int i=0; i<3; i++) {
        if(i==0) {
            head2 = (l*)malloc(sizeof(l));
            newNode2 = head2;
        }
        else {
            newNode2->next= (l*)malloc(sizeof(l));
            newNode2 = newNode2->next;
        }
        printf("write num : ");
        scanf("%d",&newNode2->number);
        printf("\n");
    }
    newNode2->next=NULL;

    cursor = head;
    cursor2 = head2;

    int array[3];
    int array2[3];
    for(int j=2; j>=0; j--) {
            array[j] = cursor->number;
            array2[j] = cursor2->number;
            cursor = cursor->next;
            cursor2 = cursor2->next;
    }
    int totalArray[3] = {0,0,0};
    for(int i=2; i>=0; i--) {
        totalArray[i] += array[i] + array2[i];
        if(totalArray[i]>=10) {
            totalArray[i] = totalArray[i]%10;
            totalArray[i-1] = 1;
        }
    }

    for(int i=2; i>=0; i--) {
        printf("%d",totalArray[i]);
    }

    return 0;
}