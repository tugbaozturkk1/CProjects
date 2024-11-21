#include <stdio.h>

int main() {

    int eleman,x,y,i;

    printf("eleman sayisi gir = ");
    scanf("%d",&eleman);

    int n[eleman][eleman];

    for(y=0; y<eleman; y++) {
        for(x=0; x<eleman; x++) {
            scanf("%d",&n[x][y]);
        }
    }

    for(y=0; y<eleman; y++) {
        for(x=0; x<eleman; x++) {
            printf("%d ",n[x][y]);
        }
        printf("\n");
    }
    return 0;
}