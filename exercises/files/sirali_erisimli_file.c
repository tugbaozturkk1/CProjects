#include <stdio.h>
#include <stdlib.h>

int main() {

    FILE *fileP;
    char name[15];
    int no;

    if((fileP=fopen("dosya.txt","w")) == NULL){
        printf("dosya acilamadi\n");
        exit(1);
    }
    else {
        printf("sirasiyla ad, no (CTRL+Z=>cikis)\n");
        scanf("%s%d",name, &no);
        while(!feof(stdin)) {
            fprintf(fileP, "%s\t%d\n", name, no);
            scanf("%s%d",name, &no);
        }
        fclose(fileP);
        printf("dosya olusturuldu\n");
    }
    
    if((fileP=fopen("dosya.txt","r"))==NULL) {
        printf("dosya acilamadi\n");
    }
    else {
        fscanf(fileP, "%s%d", name, &no);
        while(!feof(fileP)) {
            printf("%s\t%d\n",name, no);
            fscanf(fileP, "%s%d", name, &no);
        }
        fclose(fileP);
        printf("dosya okundu\n");
    }

    return 0;
}