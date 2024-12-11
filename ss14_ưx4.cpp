#include <stdio.h>
#include <string.h>
int main() {
    char str[100];
    printf("Nhap mot chuoi: ");
    fgets(str, sizeof(str), stdin);
    size_t len = strlen(str);
    if (str[len - 1] == '\n') {
        str[len - 1] = '\0';
    }
    char ch;
    printf("Nhap mot ky tu: ");
    scanf(" %c", &ch);
    int count = 0;
    for (size_t i = 0; i < strlen(str); i++) {
        if (str[i] == ch) {
            count++;
        }
    }
    printf("Ky tu '%c' xuat hien %d lan trong chuoi.\n", ch, count);
    return 0;
}

