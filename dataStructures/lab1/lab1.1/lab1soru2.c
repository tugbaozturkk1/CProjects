/*
    bir sayinin ussunu rekursif alan fonks. yaz
    fonks(taban, us)
    us = 0 => sonuc = 1
    us = 1 => sonuc = taban
    us>=0
    us ve tabani kullanicidan al
*/

#include <stdio.h>

int usAl();

int main() {

    int us, taban;

    printf("us degerini gir (us>=0 olmali): ");
    scanf("%d",&us);
    while(us<0) {
        printf("0'dan buyuk deger girilmeli!\n");
        scanf("%d",&us);
    }
    
    printf("taban degerini gir : ");
    scanf("%d",&taban);

    printf("sonuc = %d",usAl(taban, us));
    
    return 0;
}

int usAl(int taban, int us) {
    if(us==1) {
        return taban;
    }
    else if(us==0) {
        return 1;
    }
    else {
        return taban*usAl(taban,(us-1));
    }
}