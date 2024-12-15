#include <stdio.h>
void inMang(int *mang, int kichThuoc) {
    for (int i = 0; i < kichThuoc; i++) {
        printf("Phan tu thu %d: %d\n", i, *(mang + i)); 
    }
}
int main() {
    int mang[5] = {10, 20, 30, 40, 50};
    inMang(mang, 5);

    return 0;
}

