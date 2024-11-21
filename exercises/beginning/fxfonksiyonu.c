#include <stdio.h>

int main() {

    int x,y,sonuc;

    printf("x degerini gir = ");
    scanf("%d",&x);

    if(x<0) {
        printf("deger sabittir ve 1'dir");
    }
    else if((x>=0) && (x<=2)) {
        printf("%d",x);
    }
    else if((x>2) && (x<=4)) {
        printf("deger sabit ve 3");
    }
    else {
        sonuc = 4-x;
        printf("%d",sonuc);
    }
    return 0;
}