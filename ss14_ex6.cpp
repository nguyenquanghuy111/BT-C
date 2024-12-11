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
    int word_count = 0;
    char *token = strtok(str, " "); 
    while (token != NULL) {
        word_count++;
        token = strtok(NULL, " ");
    }
    printf("So tu trong chuoi: %d\n", word_count);
    return 0;
}
