/*
    stack ve queue'nin içeriğini değiştiren fonks.
*/

#include <stdio.h>
#include <stdlib.h>
#define STACK_SIZE 4
#define QUEUE_SIZE 4

struct node {
    int data;
    struct node *next;
};

typedef struct {
    int count;
    struct node *top;
}stack;

typedef struct {
    struct node *front;
    struct node *rear;
    int count;
}queue;

void stackBaslat();
void push();
int pop();
void showStack();

void queueBaslat();
void enqueue();
int dequeue();
void showQueue();

void swapQueueAndStack();

int main() {

    queue q;
    stack stk;

    queueBaslat(&q);
    stackBaslat(&stk);

    enqueue(&q, 12);
    enqueue(&q, 10);
    enqueue(&q, 2);
    enqueue(&q, 8);
    enqueue(&q, 4);

    push(&stk, 9);
    push(&stk, 3);
    push(&stk, 7);

    swapQueueAndStack(&stk, &q);
    printf("\nQueue : ");
    showQueue(&q);
    printf("\n--------\n");
    printf("Stack: ");
    showStack(&stk);

    return 0;
}

void stackBaslat(stack *stk) {
    stk->count = 0;
    stk->top = NULL;
}

void push(stack *stk, int key) {
    if(stk->count == STACK_SIZE) {
        printf("stack dolu\n");
    }
    else {
        struct node *temp = (struct node *)malloc(sizeof(struct node));
        temp->data = key;
        temp->next = stk->top;
        stk->top = temp;
        stk->count++;
    }
}

int pop(stack *stk) {
    if(stk->count==0) {
        printf("stack bos\n");
        return -1;
    }
    else {
        int x = stk->top->data;
        struct node *del = stk->top;
        stk->top = stk->top->next;
        free(del);
        stk->count--;
        return x;
    }
}

void queueBaslat(queue *q) {
    q->count = 0;
    q->front = NULL;
    q->rear = NULL;
}

void enqueue(queue *q, int key) {
    if(q->count == QUEUE_SIZE) {
        printf("queue dolu\n");
    }
    else {
        struct node *temp = (struct node*)malloc(sizeof(struct node));
        temp->data = key;
        temp->next = NULL;

        if(q->count==0) {
            q->front = temp;
            q->rear = temp;
        }
        else {
            q->rear->next = temp;
            q->rear = temp;
        }
        q->count++;
    }
}

int dequeue(queue *q) {
    if(q->count==0) {
        printf("queue bos \n");
        return -1;
    }
    else {
        struct node *temp = q->front;
        int x = temp->data;
        q->front = q->front->next;
        q->count--;
        free(temp);
        if(q->count==0) {
            q->rear = NULL;
        }
        return x;
    }
}

void swapQueueAndStack(stack *stk, queue *q) {
    queue q1;
    queueBaslat(&q1);
    while(q->count!=0) {
        enqueue(&q1, dequeue(q));
    }
    printf("Queue1 : ");
    showQueue(&q1);
    while(stk->count!=0) {
        enqueue(q, pop(stk));
    }
    while(q1.count!=0) {
        push(stk, dequeue(&q1));
    }
}

void showStack(stack *stk) {
    struct node *temp = stk->top;
    while (temp != NULL) {
        printf("%d ", temp->data);
        temp = temp->next;
    }
}

void showQueue(queue *q) {
    struct node *temp = q->front;
    while(temp!=NULL) {
        printf("%d ", temp->data);
        temp = temp->next;
    }
}