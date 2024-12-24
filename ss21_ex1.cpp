#include <stdio.h>
int main() {
    FILE *file;
    char input[100];
    file = fopen("bt01.txt", "w");
    if (file == NULL) {
        printf("Khong the mo tep bt01.txt!\n");
        return 1;
    }
    printf("Nhap chuoi: ");
    scanf("%[^\n]", input); 
    fputs(input, file);
    fclose(file);
    printf("da ghi chuoi vào tep bt01.txt.\n");
    return 0;
}

