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
        printf("Ki tu dau tien trong tep l�: %c\n", firstChar);
    } else {
        printf("Tep rong, kh�ng c� ki tu .\n");
    }
    fclose(file);
    return 0;
}

