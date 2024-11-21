#include <stdio.h>
#include <stdlib.h>
#define STACK_SIZE 4

struct stack {
    int data[STACK_SIZE];
    int top;
};

void push();
int pop();
void reset();

int main() {
    int c;
    struct stack stk;

    reset(&stk);
    push(&stk, 9);
    push(&stk, 6);
    push(&stk, 4);
    push(&stk, 8);
    //push(&stk, 2);
    //c = pop(&stk);
    //printf("%d\n", c);
    //reset(&stk);
    //c = pop(&stk);
    c = pop(&stk);
    c = pop(&stk);
    c = pop(&stk);
    c = pop(&stk);
    printf("%d\n", c);
    c = pop(&stk);
    printf("%d\n", c);

    return 0;
}

void push(struct stack *stk, int c) {
    if(stk->top==STACK_SIZE-1) {
        printf("stack is full\n");
    }
    else {
        stk->top++;
        stk->data[stk->top] = c;
    }
}

int pop(struct stack *stk) {
    if(stk->top==-1) {
        printf("stack is empty\n");
        return -1;
    }
    else {
        int c = stk->data[stk->top];
        stk->top--;
        return c;
    }
}

void reset(struct stack *stk) {
    stk->top=-1;
}