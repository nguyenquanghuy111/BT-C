#include <stdio.h>
int kiemTraSoNguyenTo(int n) {
    if (n < 2) {
        return 0; 
    }
    for (int i = 2; i <= n / 2; i++) { 
        if (n % i == 0) {
            return 0; 
        }
    }
    return 1; 
}

int main() {
    int so1, so2;
    printf("so thu nhat: ");
    scanf("%d", &so1);
    printf("so thu hai: ");
    scanf("%d", &so2);
    if (kiemTraSoNguyenTo(so1)) {
        printf("%d là so nguyên to.\n", so1);
    } else {
        printf("%d không phai là so nguyên to.\n", so1);
    }

    if (kiemTraSoNguyenTo(so2)) {
        printf("%d là so nguyên to.\n", so2);
    } else {
        printf("%d không phai là so nguyên to.\n", so2);
    }

    return 0;
}

