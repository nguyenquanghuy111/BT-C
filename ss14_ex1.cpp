#include <stdio.h>

int main() {
    char input[1000]; 
    int length = 0; 
    printf("nhap vao mot chuoi bat ki: ");
    fgets(input, sizeof(input), stdin); 
    while (input[length] != '\0' && input[length] != '\n') {
        length++;
    }
    printf("chuoi vua nhap: %s", input); 
    printf("do dai chuoi: %d\n", length);

    return 0;
}

