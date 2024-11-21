#include <stdio.h>

int main() {

    int ary[4] = {1,2,3,4};
    int *p = ary + 2;
    printf("%d %d\n",p[-2],ary[*p]); // 1 4=ary[3]

    return 0;
}