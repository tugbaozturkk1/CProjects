#include <stdio.h>
#include <stdlib.h>

struct student {
    int no;
    float grade;
    char name[15];
};
typedef struct student ogr;

void update();

int main() {
    FILE *file, *siraliFile;
    ogr rastgele = {0, 0.0, ""};

    // Rastgele erişimli dosya oluşturma ve başlangıç değerleri yazma
    if ((file = fopen("grades.dat", "w")) == NULL) {
        printf("dosya olusturulamadi\n");
    } else {
        for (int i = 0; i < 3; i++) {
            fwrite(&rastgele, sizeof(ogr), 1, file);
        }
        fclose(file);
    }

    // Rastgele erişimli dosyaya öğrenci bilgilerini yazma
    if ((file = fopen("grades.dat", "r+")) == NULL) {
        printf("dosya acilamadi\n");
    } else {
        printf("no, grade, name gir\n");
        for (int i = 0; i < 3; i++) {
            fscanf(stdin, "%d %f %s", &rastgele.no, &rastgele.grade, rastgele.name);
            fseek(file, i * sizeof(ogr), SEEK_SET);
            fwrite(&rastgele, sizeof(ogr), 1, file);
        }
        fclose(file);
    }

    // Sıralı erişimli dosyaya laboratuvar puanlarını yazma
    if ((siraliFile = fopen("labs.txt", "w")) == NULL) {
        printf("dosya olusmadi\n");
    } else {
        printf("ogrencinin no, grade girin\n");
        int no;
        float grade;
        while (scanf("%d %f", &no, &grade) == 2) {
            fprintf(siraliFile, "%d %f\n", no, grade);
        }
        fclose(siraliFile);
    }

    // Dosyaları güncelleme
    if ((file = fopen("grades.dat", "r+")) == NULL) {
        printf("dosya acilamadi\n");
    }
    if ((siraliFile = fopen("labs.txt", "r")) == NULL) {
        printf("dosya acilamadi\n");
        fclose(file);
    }

    update(file, siraliFile);

    fclose(file);
    fclose(siraliFile);

    // Güncellenmiş dosyayı okuyup yazdırma
    if ((file = fopen("grades.dat", "r")) == NULL) {
        printf("dosya acilamadi\n");
    }
    for (int i = 0; i < 3; i++) {
        fseek(file, i * sizeof(ogr), SEEK_SET);
        fread(&rastgele, sizeof(ogr), 1, file);
        printf("%d\t%f\t%s\n", rastgele.no, rastgele.grade, rastgele.name);
    }
    fclose(file);

    return 0;
}

void update(FILE *rast_file, FILE *sirali_file) {
    int no;
    float lab_grade;
    ogr rastgele;

    while (fscanf(sirali_file, "%d %f", &no, &lab_grade) == 2) {
        fseek(rast_file, 0, SEEK_SET);
        while (fread(&rastgele, sizeof(ogr), 1, rast_file)) {
            if (rastgele.no == no) {
                rastgele.grade += lab_grade;
                fseek(rast_file, -sizeof(ogr), SEEK_CUR);
                fwrite(&rastgele, sizeof(ogr), 1, rast_file);
                break;
            }
        }
    }
}