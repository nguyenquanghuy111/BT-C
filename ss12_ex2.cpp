#include <stdio.h>
void inMang(int arr[], int size) {
    printf("Cac phan tu trong mang là:\n");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int mang[100],size;
    printf("Nhap so luong cua mang: ");
    scanf("%d", &size); 
    printf("Nhap cac phan tu cua mang:\n");
    for (int i = 0; i < size; i++) {
        printf("Phan tu [%d]: ", i + 1);
        scanf("%d", &mang[i]);
    }
    inMang(mang, size);
    return 0;
}

