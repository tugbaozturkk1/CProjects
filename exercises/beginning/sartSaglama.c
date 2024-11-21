#include <stdio.h>
#include <math.h>
int main() {

    int a,b;  

    scanf("%d",&b);

    for(a=1; a<=100; a++) {
        if(pow(a,3)-pow(a,2) == b) {
            printf("%d",a);
        }
    }
    return 0;
}