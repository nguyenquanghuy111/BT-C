#include <stdio.h>

int main() {
    FILE *file;
    char input[100];
    file = fopen("bt01.txt", "a");
    if (file == NULL) {
        printf("Khong the mo tep bt01.txt!\n");
        return 1;
    }
    printf("Nhap chuoi can them vao tep: ");
    scanf(" %[^\n]", input); 
    fputs(input, file);
    fputs("\n", file); 
    fclose(file);
    printf("Ða ghi thêm chuoi vào tep bt01.txt.\n");
    return 0;
}

