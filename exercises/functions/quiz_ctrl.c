#include <stdio.h>

void sayi_kontrol();

int main() {
    int a[10] = {233, 45, 777, 81, 999999, 36, 90, 88, 11, 61};
    sayi_kontrol(a, 10);
    return 0;
}

void sayi_kontrol(int dizi[], int size) {
    int i, j, k, basamak, num, benzerlik;
    for (i = 0; i < size; i++) {
        num = dizi[i];
        j = 0;
        benzerlik = 0;
        int gecicidizi[10] = {0};
        while (num > 0) {
            basamak = num % 10;
            gecicidizi[j] = basamak;
            num = num / 10;
            j++;
        }
        for (k = 0; k < j - 1; k++) {
            if (gecicidizi[k] == gecicidizi[k + 1]) {
                benzerlik++;
            }
        }
        if (benzerlik == j - 1) {
            printf("%d >> tum rakamlar esit\n", dizi[i]);
        } else {
            printf("%d >> tum rakamlar esit degil\n", dizi[i]);
        }
    }
}
