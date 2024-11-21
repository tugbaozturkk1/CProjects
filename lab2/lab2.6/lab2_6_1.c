#include <stdio.h>
#include <stdlib.h>

int main() {

    int i;
    //int *ptr=(int *)calloc(5,sizeof(int));
    int *ptr=(int *)malloc(5*sizeof(int));
    for(i=0; i<5; i++) {
        *(ptr+i)=i;
    }
/*
    printf("1 = %d\n",*ptr++);
    printf("2 = %d\n",(*ptr)++);
    printf("3 = %d\n",*ptr);
    printf("4 = %d\n",*++ptr);
    printf("5 = %d\n",++*ptr);
*/
    printf("1 = %d\n",ptr);
    printf("2 = %d\n",*ptr++);
    printf("3 = %d\n",ptr);
    printf("4 = %d\n",(*ptr)++);
    printf("5 = %d\n",*ptr);
    printf("6 = %d\n",*++ptr);
    printf("7 = %d\n",++*ptr);
    printf("8 = %d ve %d",ptr,*ptr);

}