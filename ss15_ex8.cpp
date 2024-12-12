#include <stdio.h>
#include <ctype.h>

int main() {
    char str[100];
    printf("Nhap chuoi: ");
    fgets(str, sizeof(str), stdin);
    for (int i = 0; str[i] != '\0'; i++) {
        if (i == 0 || str[i - 1] == ' ') {
            if (str[i] >= 'a' && str[i] <= 'z') {
                str[i] -= 32; 
            }
        }
    }
    printf("Chuoi sau khi viet hoa: %s\n", str);
    return 0;
}
