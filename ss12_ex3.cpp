#include <stdio.h>
long long tinhGiaiThua(int n) {
    if (n < 0) {
        printf("loi!\n");
        return -1;
    }

    long long giaiThua = 1;
    for (int i = 1; i <= n; i++) {
        giaiThua *= i;
    }
    return giaiThua;
}

int main() {
    int so;
    long long ketQua;
    printf("Nhap mot so nguyên: ");
    scanf("%d", &so);
    ketQua = tinhGiaiThua(so);
    if (ketQua != -1) {
        printf("Giai thua cua %d la:%3d\n", so, ketQua);
    }

    return 0;
}

