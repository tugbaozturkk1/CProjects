// operator kullanmadan

#include <stdio.h>

int main() {
    int tamKisim;
    float sayi,ondalikliKisim;

    printf("sayi gir = ");
    scanf("%f",&sayi);

    tamKisim = (int) sayi;
    ondalikliKisim = sayi - tamKisim;

    printf("tam kisim = %d\n",tamKisim);
    printf("kesir = %f",ondalikliKisim);
    return 0;
}