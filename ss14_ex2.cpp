#include <stdio.h>
int main() {
    char input[] = "Hello, world!"; 
    printf("chuoi khai bao: %s\n", input);
    printf("cac ki tu trong chuoi:\n");
    for (int i = 0; input[i] != '\0'; i++) {
        printf("%c ", input[i]); 
    }
    printf("\n"); 
    return 0;
}
