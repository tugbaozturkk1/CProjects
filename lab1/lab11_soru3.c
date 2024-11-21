// 10 ogrencinin boy kilo degerlerini 2 boyutlu diziye aktar, ort boy ve ort kilo bul

#include <stdio.h>

int main() {

    int i,j,boy_kilo[10][2];
    float toplam_boy=0.0, toplam_kilo=0.0;

    for(i=0; i<10; i++) {
        for(j=0; j<2; j++) {
            if(j==0) {
                printf("%d. ogrencinin boyu (cm) = ",i+1);
                scanf("%d",&boy_kilo[i][j]);
                toplam_boy += boy_kilo[i][j];
            }
            else {
                printf("%d. ogrencinin kilosu (kg) = ",i+1);
                scanf("%d",&boy_kilo[i][j]);
                toplam_kilo += boy_kilo[i][j];
            }

        }
    }

    printf("ortalama boy = %.2f\n",toplam_boy/10);
    printf("ortalama kilo = %.2f",toplam_kilo/10);

    return 0;
}