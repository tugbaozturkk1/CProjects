#include <stdio.h>

int main() {

    int deger,i,j,toplam=0;

    printf("n degerini gir = ");
    scanf("%d",&deger);

    int n[deger][deger];

    for(i=0; i<deger; i++) {
        for(j=0; j<deger; j++) {
            printf("matrisin elemanlarini gir = ");
            scanf("%d",&n[i][j]);
        }
    }

    for(i=0; i<deger; i++) {
        for(j=0; j<deger; j++) {
            if(i==j) {
                toplam += n[i][j];
            }
        }
    }
    printf("%d",toplam);
    return 0;
}