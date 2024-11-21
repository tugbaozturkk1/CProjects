// sirayi bozmadan araya sayi ekleme

#include <stdio.h>

int main() {
    int dizi1[100];
    int i, j, n, ek_sayi, key;

    printf("dizinin eleman sayisi = ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        printf("%d. eleman = ", i + 1);
        scanf("%d", &dizi1[i]);
    }

    printf("eklenecek sayi = ");
    scanf("%d", &ek_sayi);

    for (i = 0; i < n; i++) {
        if (dizi1[i] > ek_sayi) {
            for (j = n; j > i; j--) {
                dizi1[j] = dizi1[j - 1];
            }
            dizi1[i] = ek_sayi;
            break;
        }
    }

    for (i = 0; i <= n; i++) {
        printf("%d ", dizi1[i]);
    }

    return 0;
}
