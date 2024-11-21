#include <stdio.h>

int main() {

    int n[5],i=0,sayi,temp,size;

    printf("sayi = ");
    scanf("%d",&sayi);    

    if(sayi>0 && sayi<99999) {
        while(sayi>0) {
        temp = sayi % 10;
        n[i] = temp;
        i++;
        sayi /= 10;
        size = i;
        } 
    }
    for(i=0; i<size; i++) {
        printf("%d ",n[i]);
    }
    return 0;
}