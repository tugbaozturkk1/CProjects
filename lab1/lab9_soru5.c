#include <stdio.h>
#include <math.h>

int main() {

    int n,x,us,i;
    double sonuc=0.0, fact=1.0;
    printf("sayi gir = ");
    scanf("%d",&x);

    printf("seri kac kere devam etsin ? = ");
    scanf("%d",&n);

    for(us=0; us<n; us++) {

        for(i=1; i<=us; i++) {
            fact *= i;
        }
        sonuc += pow(x,us)/fact;

        fact = 1;
    }
    printf("%.2lf",sonuc);
    return 0;
}