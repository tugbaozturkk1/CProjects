/*
    baglantili liste iceren bir yigin yapisi olustur
    islemler yigina eklenir
    kullanici bir geri alma islemi gerceklestirdiginde en son
    islem yigindan kaldirilir
*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct node {
    char operation[100];
    struct node *next;
}node;

typedef struct {
    struct node *top;
    int cnt;
}stack;

void push(); // islem ekle
void pop(); // son islemi kaldir
char *top(); // yiginin en ustundeki islemi dondur

int main() {

    stack s;
    s.top = NULL;
    s.cnt = 0;

    push(&s, "Google acildi");
    push(&s, "Veri yapilari arandi");
    push(&s, "stack overflow acildi");

    printf("gecerli islem: %s\n", top(&s));
    pop(&s);
    printf("geri aldiktan sonra gecerli islem: %s\n", top(&s));

    return 0;
}

void push(stack *stk, char message[]) {
    struct node *temp = (struct node*)malloc(sizeof(struct node));
    strcpy(temp->operation, message);
    temp->next = stk->top;
    stk->top = temp;
    stk->cnt++;
}

void pop(stack *stk) {
    if(stk->cnt==0) {
        printf("bellek bos");
        return;
    }

    struct node *del = stk->top;
    stk->top = stk->top->next;
    free(del);
    stk->cnt--;
}

char *top(stack *stk) {
    return stk->top->operation;
}