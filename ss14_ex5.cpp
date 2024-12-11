#include <stdio.h>

int countWords(char str[]) {
    int count = 0;
    int i = 0;
    while (str[i] == ' ') {
        i++;
    }
    for (; str[i] != '\0'; i++) {
        if (str[i] == ' ') {
            count++;
        
            while (str[i] == ' ') {
                i++;
            }
        }
    }

    if (str[i-1] != ' ' && str[i-1] != '\0') {
        count++;
    }

    return count;
}

int main() {
    char str[100];

    
    printf("nhap chuoi: ");
    fgets(str, sizeof(str), stdin); 
    int result = countWords(str);
    printf("so tu trong chuoi: %d\n", result);

    return 0;
}

