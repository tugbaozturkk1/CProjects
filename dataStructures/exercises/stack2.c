#include <stdio.h>
#include <stdlib.h>
#define STACK_SIZE 4

typedef struct {
    struct node *top;
    int count;
}stack;

struct node {
    int data;
    struct node *next;
};

void initialize();
void push();
int pop();

int main() {

    stack stk;
    int c;

    initialize(&stk);
    push(&stk, 8);
    push(&stk, 3);
    push(&stk, 12);
    push(&stk, 2);
    c = pop(&stk);
    printf("%d\n", c);
    c = pop(&stk);
    printf("%d\n", c);

    return 0;
}

void initialize(stack *stk) {
    stk->top = NULL;
    stk->count = 0;
}

void push(stack *stk, int key) {
    if(stk->count==STACK_SIZE) {
        printf("stack is full\n");
    }
    else {
        struct node *temp = (struct node*)malloc(sizeof(struct node));
        temp->data = key;
        temp->next = stk->top;
        stk->top = temp;
        stk->count++;
    }
}

int pop(stack *stk) {
    if(stk->count==0) {
        printf("stack is empty\n");
        return -10;
    }
    else {
        int key = stk->top->data;
        struct node *del = stk->top;
        stk->top = stk->top->next;
        free(del);
        stk->count--;
        return key;
    }
}