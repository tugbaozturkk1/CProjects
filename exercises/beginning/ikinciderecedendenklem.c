#include <stdio.h>
#include <math.h>

int main() {
;
    float a,b,c,x1,x2,delta;

    printf("baskatsayiyi giriniz = ");
    scanf("%f",&a);

    printf("b katsayisini giriniz = ");
    scanf("%f",&b);

    printf("c katsayisini giriniz = ");
    scanf("%f",&c);   

    delta = pow(b,2)-4*a*c;

    if(delta>0) {
        x1 = (-b-sqrt(delta))/(2*a);
        x2 = (-b+sqrt(delta))/(2*a);
        printf("delta = %.lf\n",delta);
        printf("iki kok vardir ve ilk kok = %.2f\n",x1);
        printf("ikinci kok = %.2f",x2);
    }
    else if(delta==0) {
        x1 = -b/2*a;
        printf("tek kok vardir ve kok = %.f",x1);
    }
    else {
        printf("reel kok yoktur");
    }
    return 0;
}