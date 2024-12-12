
#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    fgets(str, 100, stdin);
    str[strcspn(str, "\n")] = '\0';
    int ascii[256] = {0}; 
    for (int i = 0; str[i] != '\0'; i++) {
        ascii[str[i]]++;
    }

    for (int i = 0; i < 256; i++) {
        if (ascii[i] > 0) {
            printf("%c: %d\n", i, ascii[i]);
        }
    }
    return 0;
}


