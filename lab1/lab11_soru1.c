// 100'den kucuk pentagon sayilar ==> Pn=n*(3*n-1)/2

#include <stdio.h>

int main() {

    int i,j,n=1,p[4][2];

    for(i=0; i<4; i++) {
        for(j=0; j<2; j++) {
            p[i][j] = n*(3*n-1)/2;
            if(p[i][j]<100) {
                printf("%d ",p[i][j]);
            }
            else {
                break;
            }
            n++;
        }
        printf("\n");
    }
    return 0;
}