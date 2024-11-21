/*
    yapidaki ogrencileri isme gore sirala
*/

#include <stdio.h>
#include <string.h>

int main() {
    int i,j;
    struct student {
        char name[15];
    };

    struct student students[5];
    struct student temp;

    printf("ogrenci isimlerini gir : ");
    for(i=0; i<5; i++) {
        scanf("%s",students[i].name);
    }
    
    for(i=0; i<5; i++) {
        for(j=0; j<5-i-1; j++) {
            if(strcmp(students[j].name,students[j+1].name)>0) {
                temp = students[j];
                students[j] = students[j+1];
                students[j+1] = temp;
            }
        }
    }

    printf("siralanmis isimler\n");
    for(i=0; i<5; i++) {
        printf("%s\n",students[i].name);
    }

    return 0;
}