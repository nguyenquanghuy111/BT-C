
#include <stdio.h>

int main() {
    char str[] = "Hello my gmail is test123@gmail.com";
    int chu = 0, so = 0, kiTuDB = 0;

    for (int i = 0; str[i] != '\0'; i++) {
        if ((str[i] >= 65 && str[i] <= 90) || (str[i] >= 97 && str[i] <= 122)) {
            chu++;
        }
        else if (str[i] >= 48 && str[i] <= 57) {
            so++;
        }
        else {
            kiTuDB++;
        }
    }

    printf("so luong chu cai: %d\n", chu);
    printf("so luon so so: %d\n", so);
    printf("so luong ki tu dac biet: %d\n", kiTuDB);

    return 0;
}


