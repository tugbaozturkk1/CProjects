#include <stdio.h>

int main() {

    int n[10],i=0,temp;

    for(i; i<10; i++){
        printf("sayi gir = ");
        scanf("%d",&n[i]);
    }

    for(i=0; i<5; i++) {
        temp = n[i];
        n[i] = n[9-i];
        n[9-i] = temp;
    }

    for(i=0; i<10; i++) {
        printf("%d ",n[i]);
    }

    return 0;
}


