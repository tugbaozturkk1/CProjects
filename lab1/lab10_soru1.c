#include <stdio.h>

int main() {
	
	float n[8],toplam=0.0;
	int i;
	
	for(i=0; i<8; i++) {
		
		printf("deger girin = ");
		scanf("%f",&n[i]);
		toplam += n[i];
	}
	printf("ortalama = %f",toplam/8);
	return 0;
}