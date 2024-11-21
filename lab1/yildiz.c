#include <stdio.h>

int main() {

    int satir,sutun,n,a,bosluk;

    printf("sayi gir = ");
    scanf("%d",&n);
    
    for (satir = n; satir >=1; satir--)
    {
        for(bosluk = n-1; bosluk>=0; bosluk--) {
            printf(" ");
        }
        printf("*\n");
        n--;
    }

    return 0;
}