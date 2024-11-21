#include <stdio.h>
#include <math.h>
#include <string.h>
/*
int main() {

    int num,a,b;

    scanf("%d",&num);

    for(a=1; a<=pow(num,0.5); a++) {
        for(b=1; b<=pow(num,0.5); b++) {
            if(pow(a,2)+pow(b,2) == num) {
                printf("%d ve %d\n",a,b);
            }
        }
    }

    return 0;
}

int main() {

    int i,j,k;

    scanf("%d",&k);

    for(i=0; i<=k; i+=3) {
        for(j=0; j<=k; j+=5) {
            if(i + j == k) {
                printf("i = %d ve j = %d ",i/3,j/5);
            }
        }
    }

    return 0;
}

*/
/*
int main() {

    char deneme[200] = "Dunya!";
    char d[] = "Dunya!";

   // printf("%d\n",strlen(deneme));
   // printf("%d\n",sizeof(deneme));
    
    printf("%d\n",strcmp(deneme,d));
 
    return 0;
}
*/

/*
int main(){

    int dizi[] = {1,2,3,4,5};

    int boyut = sizeof(dizi) / sizeof(dizi[0]);  // bellekteki tutulan toplam alan / bir elemanın bellekte kapladıgı alan = dizinin eleman sayisi
    printf("%d",boyut);

    return 0;
}
*/
/*
int main()
{
	int x,y;
    float a,b;
    scanf("%d%d",&x,&y);
    scanf("%f%f",&a,&b);
    printf("%d %d\n",x+y,x-y);
    printf("%f %f",a+b,a-b);
    
    return 0;
}
*/

    int main() {

    int n,i,j,k,n2;
    scanf("%d", &n);
    n2=n;
    int sekil[n*2-1][n*2-1];
    for(i=0; i<n*2-1; i++){
        for(j=0; j<n*2-1; j++) {
            if(i==j) {
                sekil[i][j] = 1;
                printf("%d ",sekil[i][j]);
            }
            else if((i==0 || i==n*2-2) || (j==0 || j==n*2-2)) {
                sekil[i][j] = n;
                printf("%d ",sekil[i][j]);
            }
            else {
                sekil[i][j] = n2-1;
                printf("%d ",sekil[i][j]);
            }
        printf("\n");
        n2--;
        }
    }

    return 0;
}