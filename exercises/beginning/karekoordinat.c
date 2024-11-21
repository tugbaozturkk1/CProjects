#include <stdio.h>

int main() {

    int x1,y1,x2,y2,x3,y3;

    printf("dikdortgenin sol alt kose koord. = ");
    scanf("%d",&x1);
    scanf("%d",&y1);

    printf("dikdortgenin sag ust kose koord. = ");
    scanf("%d",&x2);
    scanf("%d",&y2);

    printf("noktanin koord. giriniz = ");
    scanf("%d",&x3);
    scanf("%d",&y3);

    if ((x2>x3 && x3>x1) && (y2>y3 && y3>y1))  {
        printf("girilen nokta dikdortgenin koordinatlari icindedir");
    }
    else {
        printf("girilen nokta dikdortgenin koord. icinde degil ");
    }
    return 0;
}