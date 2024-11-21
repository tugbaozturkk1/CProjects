#include <stdio.h>
#include <math.h>

int main() {

    int x1,y1,a,b,c;
    float uzaklik;

    printf("x koordinatini gir = ");
    scanf("%d",&x1);

    printf("y koordinatini gir = ");
    scanf("%d",&y1);   

    printf("dogrunun a katsayisini gir ");
    scanf("%d",&a);

    printf("dogrunun b katsayisini gir ");
    scanf("%d",&b);

    printf("dogrunun c katsayisini gir ");
    scanf("%d",&c);

    if (a*x1+b*y1+c==0) {
        printf("nokta dogru uzerindedir ");
    }
    else {
        uzaklik = abs(a*x1+b*y1+c)/sqrt(pow(a,2)+pow(b,2));
        printf("girilen nokta dogru uzerinde degildir.\nnoktanin dogruya uzakligi = %.2f",uzaklik);
    }
    return 0;
}