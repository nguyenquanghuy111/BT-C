#include <stdio.h>
struct Student {
    char fullName[50];
    int age;
    char phoneNumber[15];
};

int main() {
    struct Student x[5];
    for (int i = 0; i < 5; i++) {
        printf("Nhap thong tin sinh vien thu %d:\n", i + 1);

        printf("Nhap ten: ");
        getchar();
        fgets(x[i].fullName, sizeof(x[i].fullName), stdin);

        printf("Nhap tuoi: ");
        scanf("%d", &x[i].age);

        getchar(); 

        printf("Nhap so dien thoai: ");
        fgets(x[i].phoneNumber, sizeof(x[i].phoneNumber), stdin);
        printf("\n");
    }
    printf("Thong tin cac sinh vien da nhap:\n");
    for (int i = 0; i < 5; i++) {
        printf("Sinh vien thu %d:\n", i + 1);
        printf("Ten: %s", x[i].fullName);
        printf("Tuoi: %d\n", x[i].age);
        printf("So dien thoai: %s", x[i].phoneNumber);
        printf("\n");
    }
    return 0;
}

