#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct kisi {
    char name[10];
    struct kisi *next;
};
typedef struct kisi node;
int main() {
    node *head,*p;

    for(int i=0; i<3; i++) {
        if(i==0) {
            head = (node *)malloc(sizeof(node));
            p=head;
        }
        else {
            p->next= (node *)malloc(sizeof(node));
            p=p->next;
        }
        scanf("%s",p->name);
    }
    p->next=NULL;

    char aranan[10];
    scanf("%s",aranan);
    p=head;
    while(p!=NULL) {
        if((strcmp(aranan,p->name))==0) {
            printf("aranan isim var\n");
        }
        p=p->next;
    }

    return 0;
}