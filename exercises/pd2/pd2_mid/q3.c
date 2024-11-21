#include <stdio.h>
#include <conio.h>
void swap();
void fun();
int main() {

    int no[15];
    int i=0,k,readNo;
    printf("no gir = ");
    while(1) {
        readNo=getch(); // bir basamak alinir
        if(readNo==13) { // 13 yani enter
            break;
        }
        putchar(readNo); // no[]ya koyar 
        no[i]=(int)(readNo-'0');
        i++;
    }
    fun(no,0,i-1);
    printf("\nThe array after fun\n");
    for(k=0; k<i; k++) {
        printf("%d",no[k]);
    }

    return 0;
}

void swap(int *array, int leftIndex, int rightIndex) {

    int temp;
    if(array[leftIndex]<array[rightIndex]) {
        temp=array[leftIndex];
        array[leftIndex] = array[rightIndex];
        array[rightIndex] = temp;
    }
}

void fun(int *array, int leftIndex, int rightIndex) {
    if(leftIndex<rightIndex) {
        swap(array,leftIndex,rightIndex);
        fun(array,leftIndex+1,rightIndex-1);
    }
}
// output = 5315200022