#include<stdio.h>

int main() {

    int i,n;
    double fact=1;

    printf("sayi gir = ");
    scanf("%d",&n);

    for(i=1; i<=n; i++) {
        fact *= i;
    }

    printf("%.lf",fact);

    return 0;
}