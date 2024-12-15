#include <stdio.h>
void tinhTong(int a, int b, int *ketQua) {
    *ketQua = a + b;
}
int main() {
    int so1, so2, ketQua;
    so1 = 10;
    so2 = 20;
    tinhTong(so1, so2, &ketQua);
    printf("Tong cua %d và %d là: %d\n", so1, so2, ketQua);
    return 0;
}


