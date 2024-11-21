/*
    palindrom kontrolü
    kullanicidan cumle al
    harfleri stack'e ve queue'e at
    stack'ten ve queue'den çikan her karakteri karsilastir
*/

#include <stdio.h>
#include <stdlib.h>
#define STACK_SIZE 50

typedef struct {
    struct node *top;
    int count;
} stack;

struct node {
    char *data;
    struct node *next;
};

typedef struct {
    struct node *front;
    struct node *rear;
    int count;
} queue;

void initializeStack();
void push();
char *stackPop();

void initializeQueue();
void enqueue();
int isEmpty();
int isFull();
char *dequeue();

void karsilastir();

int main() {
    char *cumle = (char *)malloc(sizeof(char)*STACK_SIZE);
    stack *stk = (stack *)malloc(sizeof(stack));
    queue *q = (queue *)malloc(sizeof(queue));

    printf("bir cumle gir : ");
    scanf("%[^\n]", cumle);
    
    initializeStack(stk);
    initializeQueue(q);

    for (int i = 0; cumle[i] != '\0'; i++) {
        push(stk, &cumle[i]);
        enqueue(q, &cumle[i]);
    }

    karsilastir(stk, q);

    return 0;
}

void initializeStack(stack *stk) {
    stk->top = NULL;
    stk->count = 0;
}

void push(stack *stk, char *givenData) {
    if(stk->count==STACK_SIZE) {
        printf("stack is full\n");
    }
    else {
        struct node *temp = (struct node*)malloc(sizeof(struct node));
        temp->data = givenData;
        temp->next = stk->top;
        stk->top = temp;
        stk->count++;
    }
}


void initializeQueue(queue *q) {
    q->count = 0;
    q->front = NULL;
    q->rear = NULL;
}

int isEmpty(queue *q) {
    if(q->count == 0) {
        return 1;
    }
    else {
        return 0;
    }
}

int isFull(queue *q) {
    if(q->count==STACK_SIZE) {
        return 1;
    }
    else {
        return 0;
    }
}

void enqueue(queue *q, char *givenData) {
    if(isFull(q)==1) {
        printf("queue is full\n");
    }
    else {
        struct node *temp = (struct node *)malloc(sizeof(struct node));
        temp->data = givenData;
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

void karsilastir(stack *stk, queue *q) {
    while(stk->count>0 && !isEmpty(q)) {
        char *stkChar = stackPop(stk);
        char *queueChar = dequeue(q);

        if(*stkChar != *queueChar) {
            printf("palindrom degil");
            return;
        }
    }
    printf("palindrom");
}

char * stackPop(stack *stk) {
    if(stk->count==0) {
        printf("stack is empty");
    }
    else {
        char *x = stk->top->data;
        struct node *del = stk->top;
        stk->top = stk->top->next;
        free(del);
        stk->count--;
        return x;
    }
}

char * dequeue(queue *q) {
    if(isEmpty(q)==1) {
        printf("queue is empty");
    }
    else {
        struct node *temp = q->front;
        char *x = temp->data;
        q->front = temp->next;
        q->count--;
        free(temp);
        if(isEmpty(q)==1) {
            q->rear = NULL;
        }
        return x;
    }
}