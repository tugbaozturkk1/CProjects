#include <stdio.h>

int x;

void auto_depolama_sinifi() {
    printf("\nauto sinifi calistiriliyor\n\n");
    auto int a =32;
    printf("auto olarak tanimlanan a'nin degeri = %d\n",a);
    printf("----------------");
}

void register_depolama_sinifi() {
    printf("\nregister sinifi calistiriliyor\n\n");
    register char b = 'G';
    printf("register olarak tanimlanan b'nin degeri = %d\n",b);
    printf("---------------");
}

void extern_depolama_sinifi() {
    printf("\nextern sinifi calistiriliyor\n\n");
    extern int x;
    printf("extern olarak tanimlanan x'in degeri = %d\n",x);
    x=2;
    printf("extern olarak tanimlanan ve modifiye edilen x = %d\n",x);
    printf("----------");
}

void static_siniflandirma_sinifi() {
    int i = 0;
    printf("\nstatic sinifi calistiliyor\n");
    printf("\ndongu basladi\n");
    for(i=1; i<5; i++) {
        static int y = 5;
        int p = 10;
        y++;
        p++;
        printf("\nstatic tanimlanan y'nin %d. iterasyon degeri = %d\n",i,y);
        printf("\nstatic olmayan p'nin %d.iterasyondaki degeri = %d\n",i,p);
    }
    printf("\ndongu bitti\n");
    printf("---------");
}

int main() {
    auto_depolama_sinifi();
    register_depolama_sinifi();
    extern_depolama_sinifi();
    static_siniflandirma_sinifi();
    return 0;
}