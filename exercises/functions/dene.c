#include <stdio.h>
/*
void fibonacci();

int main() {

    int n;
    printf("fibonacci dizisi kacinci terime kadar gitsin = ");
    scanf("%d",&n);

    fibonacci(n);

    return 0;
}

void fibonacci(int terim) {

    int i,a=1,b=1,temp;
    printf("%d %d ",a,b);
    for(i=2; i<terim; i++) {
        temp = a + b;
        a = b;
        b = temp; 
        printf("%d ",b);
    }
}*/
/*
#define PI 3.14

int main() {
    float cevre,r=1;
    cevre=2*PI*r;
    printf("%f\n",cevre);
    PI=3.0;
    printf("yeni cevre = %d",cevre);

    return 0;
}

#include <stdio.h>
long fibonacci(long n){
    if (n == 0 || n == 1)
        return n;
    else
        return fibonacci(n - 1) + fibonacci(n - 2);
}
int main(void){
    long i, n;
    printf("How many fibonacci numbers?:");
    scanf("%d", &n);
    for (i = 1; i <= n ; i++){
        printf("Number %d: %ld\n", i, fibonacci(i));
    }
    return 0;
}

#include <stdio.h>
    int fun(int a[], int n){
    int x;
    if (n == 1)
        return a[0]; //base case – temel durum
    else
        x = fun(a, n - 1);
    if (x > a[n - 1])
        return x;
    else
        return a[n - 1];
}
int main(){
    int arr[] = { 12, 10, 300, 50, 100 };
    printf(" %d ", fun(arr, 5));
    return 0;
}*/
/*
#include <stdio.h>
int fun1(int x, int y){
    if (x == 0)
        return y;//base case – temel durum
    else
        return fun1(x - 1, x + y);
}
void fun2(int n){
    int i = 0;
    if (n > 1) {
        fun2(n - 1);
        printf("\n");
    }
    for (i = 0; i < n; i++) //base case – temel durum
        printf(" * ");
    }
int main(){
    int a = 5, b = 2,c;
    c = fun1(a, b);
    printf("Value from the function: %d\n",c);
    fun2(5);
}

#include <stdio.h>
unsigned int multiply(unsigned int x, unsigned int y){
if (x == 1){
// Terminating case 
return y;
}
else if (x > 1){
// Recursive step 
return y + multiply(x-1, y);
}
// Catch scenario when x is zero 
return 0;
}
int main() {
printf("7 times 5 is %d", multiply(7, 5));
return 0;
}
*/

// Verilen bir sayının verilen kuvvetini bulan yinelemeli bir fonksiyon yaz
/*
int f();
int main() {

    int x,y;
    printf("sayilari gir = ");
    scanf("%d%d",&x,&y);

    printf("%d sayisinin %d. kuvveti = %d",x,y,f(x,y));

    return 0;
}

int f(int a, int b) {

    if(b==1) {
        return a;
    }
    else {
        return a*f(a,b-1);
    }
}
*/
/*
int main() {

    int i;
    int *iptr;
    iptr=&i;
    *iptr=8;
    printf("i degiskeninin degeri = %d\n",i); //8
    printf("iptr adresinin icerigi = %d\n",*iptr); //8

    return 0;
}*/
/*
int main() {

    int xyz=10,k;
    int *p;

    p = &xyz;
    k=*p;
    printf("%d",k);
    return 0;
}*/
/*
int main() {
    int x,y,z;
    int *int_addr;
    x=41;
    y=12;
    
    int_addr = &x;
    z = *int_addr;
    printf("z = %d\n",z);

    int_addr = &y;
    z=*int_addr;
    printf("z = %d",z);
}*/
/*
int main() {

    double i;
    double *iptr;

    iptr=&i;
    printf("i boyutu = %d\n",sizeof(i));
    printf("iptr boyutu = %d",sizeof(iptr));

    return 0;
}*/
/*
int main() {

    int i, *iptr;
    double y,*yptr;

    iptr=&i;
    printf("iptr adres = %d\n",iptr);
    iptr++;
    printf("iptr adres = %d\n",iptr);

    yptr=&y;
    printf("yptr adres = %d\n",yptr);
    yptr++;
    printf("yptr adres = %d",yptr);

    return 0;
}*/
/*
int main() {

    int elm;
    int month[12]={1,2,3,4,5,6,7,8,9,10,11,12};
    int *ptr;
    ptr=month;
    elm=ptr[3];
    printf("%d\n",elm);

    ptr=month+3;
    printf("%d\n",ptr);

    ptr=&month[3];
    printf("%d\n",ptr);
   
    elm=(ptr+2)[2];
    printf("%d\n",elm);

    elm=*(month+3);
    printf("%d\n",elm);

    ptr=month;
    printf("%d\n",ptr);

    elm=*(ptr+2);
    printf("%d\n",elm);

    elm=*(month+1);
    printf("%d\n",elm);


    return 0;
}*/
/*
int main() {
    int i[10],j;
    int *iptr;
    for(j=0; j<10; j++) {
        i[j]=j;
    }
    iptr=i;
    for(j=0; j<10; j++) {
        printf("%d ",*iptr);
        iptr++;
    }
    printf("\n%d \n",*(iptr-1));
    iptr=i;
    for(j=0; j<10; j++) {
        printf("%d ",*(iptr+j));
    }
    printf("\n%d",*iptr);
    return 0;
}*/

int main() {

    int aylar[12] = {0,1,2,3,4,5,6,7,8,9,10,11};
    int elm;
    int *ptr;

    ptr = aylar;
    printf("%d\n",ptr);
    printf("%d\n",*ptr);

    elm = ptr[3];
    printf("%d\n",elm);

    ptr = aylar + 3;
    printf("%d\n",ptr);
    printf("%d\n",*ptr);

    ptr = &aylar[3];
    printf("%d\n",ptr);
    printf("%d\n",*ptr);

    printf("-----------\n");

    elm = (ptr+2)[2];
    printf("%d\n",elm);

    elm = *(aylar + 3);
    printf("%d\n",elm);

    ptr = aylar;

    elm=*(ptr+2);
    printf("%d\n",elm);

    elm=*(ptr+1);
    printf("%d\n",elm);

    return 0;
}