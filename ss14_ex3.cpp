#include <stdio.h>
#include <string.h>
int main() {
    char str[100];
    printf("Nhap mot chuoi: ");
    fgets(str, sizeof(str), stdin);
    size_t len = strlen(str);
    if (str[len - 1] == '\n') {
        str[len - 1] = '\0';
        len--; 
    }
    printf("Chuoi dao nguoc: ");
    for (int i = len - 1; i >= 0; i--) {
        putchar(str[i]);
    }
    printf("\n");

    return 0;
}

