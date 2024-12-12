#include <stdio.h>

int main() {
    char str[100] = "hello world"; 
    char ch;
    int i, j;
    printf("chuoi ban dau: %s\n", str);
    printf("Nhap ki tu can xoa: ");
    scanf(" %c", &ch);
    for (i = 0, j = 0; str[i] != '\0'; i++) {
        if (str[i] != ch) {
            str[j] = str[i]; 
            j++;
        }
    }
    str[j] = '\0'; 
    printf("chuoi sau khi xoa '%c': %s\n", ch, str);
    return 0;
}

