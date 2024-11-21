// ayni satir ve sutun sayisina sahip 2 matrisin toplami 

#include <stdio.h>

int main() {

    int i,j,n;

    printf("eleman sayisini gir = ");
    scanf("%d",&n);

    int a[n][n],b[n][n],c[n][n];

    for(i=0; i<n; i++) {
        for(j=0; j<n; j++) {
            printf("a matrisinin elemanini gir = ");
            scanf("%d",&a[i][j]);
            printf("b matrisinin elemanini gir = ");
            scanf("%d",&b[i][j]);
            c[i][j] = a[i][j] + b[i][j];
        }
    }
    
    for(i=0; i<n; i++) {
        for(j=0; j<n; j++) {
            printf("%d ",c[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}
