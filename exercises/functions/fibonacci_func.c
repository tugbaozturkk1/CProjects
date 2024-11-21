#include <stdio.h>

int fibonacci(int);

int main() {

    int terim,i;    

    printf("fibonacci serisinin kacinci terimi gosterilsin? = ");
    scanf("%d",&terim);

    printf("%d",fibonacci(terim));
    return 0;
}

int fibonacci(int sayi) {
    
    int i,x=1,y=1,temp;

    for(i=2; i<sayi; i++) {
        temp = x + y;
        x = y;
        y = temp;
    }
    return temp;
}