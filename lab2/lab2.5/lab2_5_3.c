#include <stdio.h>
int fun(int **p) {
    int b=8;
    *p=&b;
    printf("%d ",**p);
}
int main() {
    int a=10, *p=&a;
    printf("%d ",*p); 
    fun(&p);
    printf("%d",*p);
    /*
        10 8 8
    */
}
