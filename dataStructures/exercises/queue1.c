#include <stdio.h>
#define QUEUE_SIZE 4

typedef struct {
    int count;
    int rear;
    int front;
    int data[QUEUE_SIZE];
}queue;

void initialize();
void enqueue();
int dequeue();
int isFull();
int isEmpty();

int main() {

    int key;
    queue q;

    initialize(&q);
    enqueue(&q, 3);
    enqueue(&q, 5);
    enqueue(&q, 6);
    enqueue(&q, 1);

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
    q->rear = -1;
    q->front = 0;
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
        printf("queue is full\n");
    }
    else {
        q->count++;
        q->rear++;
        if(q->rear==QUEUE_SIZE) {
            q->rear = 0;
        }
        q->data[q->rear] = key;
    }
}

int dequeue(queue *q) {
    if(isEmpty(q)==1) {
        printf("queue is empty\n");
        return -10;
    }
    else {
        int key = q->data[q->front];
        q->front++;
        q->count--;
        if(q->front==QUEUE_SIZE) {
            q->front = 0;
        }
        return key;
    }
}