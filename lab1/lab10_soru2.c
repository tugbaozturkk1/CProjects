#include <stdio.h>
#include <math.h>

int main() {
	
	int n[10],deger,kare,i=0;
	
    while((n[i] != -1) && (i != 10)) {
            printf("deger giriniz = ");
            scanf("%d",&n[i]);
            kare = pow(n[i],2);
            printf("%d\n",kare);
            i++;
    }

	return 0;
}