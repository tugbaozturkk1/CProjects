#include <stdio.h>
/*
int main() {

    int a=10;
    printf("%d\n",a);
    {
        int a=20;
        printf("%d\n",a);
    }

    printf("%d\n",a);
    return 0;

}
*/
/*
extern int a = 1, b = 2;
c = 3;
int f(void);
int main(void) {
    printf("%3d\n", f());
    printf("%3d%3d%3d\n", a, b, c);
    return 0;
}
int f(void) {
    auto int b, c;
    a = b = c = 4;
    printf("%d%3d%3d\n",a,b,c);
    return (a + b + c);
}
*/
/*
int a = 1, b = 2;
c = 3;
int f(void);
int main(void) {
    printf("%3d\n", f());
    printf("%3d%3d%3d\n", a, b, c);
    return 0;
}
int f(void) {
    extern a;
    int b, c;
    b = c = a;
    printf("%d%3d%3d\n",a,b,c);
    return (a + b + c);
}
*/
/*
void tablo(x) {
    int i;
    if (x<=10) {
        for (i = 1; i<11; i++)
            printf("%-3d", x*i);
        printf("\n");
        return tablo(x + 1);
    }
    else return 1;
}
int main(void){
    int x = 1;
    tablo(x);
    return 0;
}
*/
/*
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
*/
/*
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
*/
/*
int SumOfElement(int[], int);

int main(){
    int n=5 ,dizi[5]={3,7,2,9,1};
    int toplam=SumOfElement(dizi,n-1);
    printf("Toplam = %d",toplam);
    return 0;
}
int SumOfElement(int dizi[], int n){
    if(n==0)
        return dizi[0];
    return dizi[n]+SumOfElement(dizi,n-1);
}

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


int sum (int num){
    if (num != 0){
        return (num % 10 + sum (num / 10));
    }
    else{
        return 0;
    }
}
int main(){
    int num, result;
    printf("Enter the number: ");
    scanf("%d", &num);
    result = sum(num);
    printf("Sum of digits in %d is %d\n", num, result);
    return 0;
}
*/
/*
void fun(int n, int a, int b){
    if (n <= 0)
        return;
    fun(n - 2, a, b + n);
    printf("%d %d %d\n", n, a, b);
}
int main() {
    int n=10, a=5,b=7;
    fun(n,a,b);    
}
*/
/*
int a;

void fonk1(void) {
    a = 20;
}

int main() {
    a = 10;
    printf("a = %d\n",a);
    fonk1();
    printf("a = %d\n",a);
}
*/
/*
int a = 10;

void fonk1(int a) {
    a=40;
    printf("a = %d\n",a);
}

int main() {

    // int a;
    // a = 30;
    printf("a = %d\n",a);
    fonk1(a);
    printf("a = %d\n",a);
    return 0;
}

*/
/*
int a=10;

void f(int a) {
    a=40;
    printf("a = %d\n",a);
}

int main() {
    //int a;
    //a=30;
    printf("a = %d\n",a);
    f(a);
    printf("a = %d",a);
    return 0;
}
*/
/*
#define N 5
int main(void)
{
    int i;
    for (i = 0; i < N;i++)
        f2();
    return 0;
}

void f2(void)
{
    printf("Hello from f2()\n");
}*/
/*
int f(int n)
{
    if (n == 0)
        return 0;
    f(n - 1);
    printf("%d\n", n);
}
int main(void)
{
    int sayi = 10;
    f(sayi);
    return 0;
}*/
/*
int toplam(int n)
{
    if (n == 1)
        return n;
    else
        return (n + toplam(n - 1));
}
int main(void)
{
    int sayi = 10;
    printf("Sonuc = %d", toplam(sayi));
    return 0;
}
*/