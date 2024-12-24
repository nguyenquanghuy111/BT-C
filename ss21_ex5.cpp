#include <stdio.h>

int main() {
    FILE *file;
    char filename[] = "bt05.txt";
    int numLines;
    printf("Nhap so dong: ");
    scanf("%d", &numLines);
    getchar(); 
    file = fopen(filename, "w");
    if (file == NULL) {
        printf("Không the mo file!\n");
        return 1;
    }
    for (int i = 0; i < numLines; i++) {
        char line[100];
        printf("Nhap dong %d: ", i + 1);
        fgets(line, sizeof(line), stdin);
        fprintf(file, "%s", line);
    }
    fclose(file);
    file = fopen(filename, "r");
    if (file == NULL) {
        printf("Không the mo file!\n");
        return 1;
    }
    printf("\nnoi dung file:\n");
    char line[100];
    while (fgets(line, sizeof(line), file) != NULL) {
        printf("%s", line);
    }
    fclose(file);
    return 0;
}

