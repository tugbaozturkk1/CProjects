/*
    ogrenci no'yu binary yap
    Binary değerin her bir basamağını hesapladıktan hemen sonra 
    dinamik olarak her bir adımda genişlettiğiniz diziye ekleyiniz. 
    Hesaplama ve dinamik diziye ekleme işlemlerini tamamladıktan sonra dinamik dizi
    içerisindeki binary kodu doğru bir şekilde listeleyiniz.
    Example: Student No: 120 Result : 1111000
*/

#include <stdio.h>
#include <stdlib.h>
/*
int main() {

    int *array=(int *)malloc(sizeof(int));
    int no,i=1,num;

    printf("ogrenci no = ");
    scanf("%d",&no);

    while(no>0) {
        num=no%2;
        array[i-1]=num;
        array=realloc(array,(i+1)*sizeof(int));
        no/=2;
        i++;
    }

    for(int j=i-2; j>=0; j--) {
        printf("%d",array[j]);
    }
    free(array);
    return 0;
}
*/
void donustur();
int main() {

    int num;
    printf("sayi gir = ");
    scanf("%d",&num);

    donustur(num);

    return 0;
}
void donustur(int sayi) {

    int i=0,k;
    int *p=(int *)malloc(sizeof(int));
    *p=sayi;
    while(1) {
        *(p+i)=sayi%2;
        sayi /= 2;
        if(sayi==1) {
            p=(int *)realloc(p,(i+1)*sizeof(int));
            *(p+i+1)=1;
            break;
        }
        i++;
        p=(int *)realloc(p,(i+1)*sizeof(int));
    }
    for(k=i+1; k>=0; k--) {
        printf("%d",*(p+k));
    }

}