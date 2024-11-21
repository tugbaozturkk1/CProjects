#include<stdio.h>
/*
int global_a;
extern int x=99;
void deneme_fonk();

int main() {
    const float y=5.56;
    static int a=5;
    global_a=10;
    printf("main a = %d\n",a++);
    printf("global a = %d\n",global_a++);
    deneme_fonk();
    printf("main a = %d\n",a);
    printf("global a = %d\n",global_a);
    printf("x = %d\n",--x);
    printf("x = %d\n",x);
    printf("y = %.2f",y);
    return 0;
}

void deneme_fonk() {

    int a = 18;
    printf("fonks.daki a = %d\n",a);
}
*/

int global_a=5;
void fonks();

int main() {

    printf("global a = %d\n",global_a);
    fonks();
    return 0;
}

void fonks() {
    
    global_a=10;
    printf("global a = %d\n",global_a);

}