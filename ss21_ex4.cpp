#include <stdio.h>

int main() {
    FILE *file;
    char firstLine[256]; 
    file = fopen("bt01.txt", "r");
    if (file == NULL) {
        printf("Khong the mo tep bt01.txt!\n");
        return 1;
    }
    if (fgets(firstLine, sizeof(firstLine), file) != NULL) {
        printf("Dong dau tien trong tep là: %s\n", firstLine);
    } else {
        printf("Tep rong, khong co noi dung .\n");
    }
    fclose(file);
    return 0;
}

