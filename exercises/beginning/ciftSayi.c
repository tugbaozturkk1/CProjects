#include<stdio.h>

int main() {

    int n,num,i,maxCift=0;

    printf("kac sayi gireceksin? = ");
    scanf("%d",&n);

    for(i=1; i<=n; i++) {
        printf("sayi gir = ");
        scanf("%d",&num);
        if((num > maxCift) && (num%2==0)) {
            maxCift = num;
        }
    }
    printf("%d",maxCift);

    return 0;
}