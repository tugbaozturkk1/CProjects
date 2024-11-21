#include <stdio.h>
#include <stdlib.h>
#define QUEUE_SIZE 4

typedef struct {
    struct node *front;
    struct node *rear;
    int count;
}queue;

struct node {
    int data;
    struct node *next;
};

void initialize();
void enqueue();
int dequeue();
int isFull();
int isEmpty();

int main() {

    queue q;
    int key;

    initialize(&q);
    enqueue(&q, 3);
    enqueue(&q, 7);
    enqueue(&q, 9);
    enqueue(&q, 0);
    enqueue(&q, 11);

    key = dequeue(&q);
    printf("%d\n", key);
    key = dequeue(&q);
    printf("%d\n", key);
    key = dequeue(&q);
    printf("%d\n", key);
    key = dequeue(&q);
    printf("%d\n", key);
    key = dequeue(&q);
    printf("%d\n", key);
    
    return 0;
}

void initialize(queue *q) {
    q->count = 0;
    q->rear = NULL;
    q->front = NULL;
}

int isFull(queue *q) {
    if(q->count == QUEUE_SIZE) {
        return 1;
    }
    else {
        return 0;
    }
}

int isEmpty(queue *q) {
    if(q->count == 0) {
        return 1;
    }
    else {
        return 0;
    }
}

void enqueue(queue *q, int key) {
    if(isFull(q)==1) {
        printf("stack is full\n");
    }
    else {
        struct node *temp = (struct node*)malloc(sizeof(struct node));
        temp->data = key;
        temp->next = NULL;
        if(isEmpty(q)==1) {
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
    if(isEmpty(q)==1) {
        printf("stack is empty\n");
        return -10;
    }
    else {
        struct node *temp = q->front;
        int key = temp->data;
        q->front = temp->next;
        q->count--;
        free(temp);
        if(isEmpty(q)==1) {
            q->rear = NULL;
        }
        return key;
    }
}