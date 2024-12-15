#include <stdio.h>
int timKiemPhanTu(int *mang, int kichThuoc, int giaTriTimKiem) {
    for (int i = 0; i < kichThuoc; i++) {
       if (*(mang + i) == giaTriTimKiem) { 
            return i; 
        }
    }
    return -1; 
}

int main() {
    int mang[6] = {1, 2, 3, 4, 5, 6};
    int giaTriTimKiem = 5; 
    int viTri = timKiemPhanTu(mang, 6, giaTriTimKiem);
    if (viTri != -1) {
        printf("Gia tri %d duoc tim thay tai vi tri: %d\n", giaTriTimKiem, viTri);
    } else {
        printf("Gia tri %d khong ton tai trong mang.\n", giaTriTimKiem);
    }
    return 0;
}

