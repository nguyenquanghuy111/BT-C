#include <stdio.h>
void capNhatPhanTu(int *mang, int viTri, int giaTriMoi, int kichThuoc) {
    if (viTri >= 0 && viTri < kichThuoc) { 
        *(mang + viTri) = giaTriMoi;      
    } else {
        printf("Vi tri %d khong hop le!\n", viTri);
    }
}
void inMang(int *mang, int kichThuoc) {
    printf("Cac phan tu trong mang: ");
    for (int i = 0; i < kichThuoc; i++) {
        printf("%d ", *(mang + i)); 
    }
    printf("\n");
}
int main() {
    int mang[5] = {10, 20, 30, 40, 50};
    printf("Mang ban dau:\n");
    inMang(mang, 5);
    printf("Cap nhat phan tu tai vi tri 2 voi gia tri moi la 100...\n");
    capNhatPhanTu(mang, 2, 100, 5);
    printf("Mang sau khi cap nhat:\n");
    inMang(mang, 5);

    return 0;
}

