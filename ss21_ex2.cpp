#include <stdio.h>

int main() {
    FILE *file;
    char firstChar;
    file = fopen("bt01.txt", "r");
    if (file == NULL) {
        printf("Khong the mo tep bt01.txt !\n");
        return 1;
    }
    firstChar = fgetc(file);
    if (firstChar != EOF) {
        printf("Ki tu dau tien trong tep là: %c\n", firstChar);
    } else {
        printf("Tep rong, không có ki tu .\n");
    }
    fclose(file);
    return 0;
}

