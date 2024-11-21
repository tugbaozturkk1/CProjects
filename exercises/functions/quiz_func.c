#include <stdio.h>

int gcd();
int max();
int lcm();

int main() {

    int number1,number2;
    scanf("%d%d",&number1,&number2);

    int big,small,result1,result2;
    if(max(number1,number2)==1) {
        big = number1;
        small=number2;
    }
    else {
        big=number2;
        small = number1;
    }
    result1 = gcd(big,small);
    result2 = lcm(number1,number2,result1);

    printf("result1 = %d\n",result1);
    printf("result2 = %d\n",result2);

    return 0;
}

int max(int num1, int num2) {
    if(num1>num2) {
        return 1;
    }
    else {
        return 2;
    }
}

int gcd(int n, int d) {
    int temp = n%d;
    printf("TEMP = %d\n",temp);
    while(temp!=0) {
        n=d;
        d=temp;
        temp = n%d;
        printf("TEMP = %d\n",temp);
    }
    return d;
}

int lcm(int num1, int num2, int num3) {
    return (num1*num2)/num3;
}